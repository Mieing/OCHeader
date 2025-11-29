@class NSString, NSArray;

@interface FBSDKEventBinding : NSObject

@property (readonly, copy, nonatomic) NSString *eventName;
@property (readonly, copy, nonatomic) NSString *eventType;
@property (readonly, copy, nonatomic) NSString *appVersion;
@property (readonly, nonatomic) NSArray *path;
@property (readonly, copy, nonatomic) NSString *pathType;
@property (readonly, nonatomic) NSArray *parameters;

+ (BOOL)matchAnyView:(id)a0 pathComponent:(id)a1;
+ (BOOL)match:(id)a0 pathComponent:(id)a1;
+ (BOOL)isViewMatchPath:(id)a0 path:(id)a1;
+ (BOOL)isPath:(id)a0 matchViewPath:(id)a1;
+ (id)findViewByPath:(id)a0 parent:(id)a1 level:(int)a2;
+ (id)findParameterOfPath:(id)a0 pathType:(id)a1 sourceView:(id)a2;

- (id)initWithJSON:(id)a0;
- (void)trackEvent:(id)a0;
- (void).cxx_destruct;

@end
