@class NSDictionary;

@interface AWEPlayInteractionLikeLoginGuideManager : NSObject

@property (copy, nonatomic) NSDictionary *likeLoginConfig;
@property (nonatomic) BOOL configured;

+ (id)sharedManager;

- (BOOL)canShowLogin;
- (void)recordLikeLogin;
- (BOOL)halfScreenLogin;
- (void).cxx_destruct;
- (id)init;

@end
