@class NSString;

@interface HTSLiveSceneSubscriptionItem : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *popId;
@property (nonatomic) BOOL isSubscribed;
@property (copy, nonatomic) NSString *demoImageURL;
@property (nonatomic) int sceneType;

+ (id)descriptor;

@end
