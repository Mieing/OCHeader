@class NSString;

@interface AWEConcernProfileRecommendCardAutoShowHelper : NSObject <AWEConcernProfileRecommendCardAutoShowHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)autoShowProfileRecommendCardAfterFollow;
+ (BOOL)autoShowProfileRecommendCardWhenUserInFollowStatus;
+ (unsigned long long)autoShowProfileRecommendCardType;
+ (BOOL)autoShowProfileRecommendCardAfterFollowFromAvatar;
+ (id)originAwemeWithAweme:(id)a0 inViewController:(id)a1;


@end
