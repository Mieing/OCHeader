@class NSString, NSArray;

@interface FBSDKCodelessParameterComponent : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, nonatomic) NSArray *path;
@property (readonly, copy, nonatomic) NSString *pathType;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;

@end
