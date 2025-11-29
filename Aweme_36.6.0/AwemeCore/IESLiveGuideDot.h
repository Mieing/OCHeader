@class NSString, NSArray;

@interface IESLiveGuideDot : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *parent;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long beginVersion;
@property (nonatomic) long long endVersion;
@property (nonatomic) BOOL showRedDot;
@property (nonatomic) long long type;
@property (nonatomic) long long priority;
@property (retain, nonatomic) NSArray *childList;

+ (long long)beginVersionForHistory;
+ (long long)endVersionForHistory;

- (void).cxx_destruct;
- (id)initWithID:(id)a0;

@end
