@class NSString;

@interface BDARewardURLService : NSObject

@property (class, copy, nonatomic) NSString *baseHost;

+ (id)bannerUrl;
+ (id)inspireUrl;
+ (id)patchUrl;
+ (id)inspirePreloadUrl;
+ (id)inspireSendUrl;
+ (id)defaultBaseUrl;
+ (id)dislikeFeedbackUrl;
+ (id)dislikeReasonUrl;
+ (id)reportFeedbackUrl;
+ (id)reportReasonUrl;
+ (id)baseURL;

@end
