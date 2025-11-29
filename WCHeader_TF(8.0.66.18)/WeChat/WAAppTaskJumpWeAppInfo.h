@class NSString;

@interface WAAppTaskJumpWeAppInfo : NSObject

@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *navStackId;
@property (nonatomic) unsigned long long jumpRole;
@property (nonatomic) unsigned long long jumpScene;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
