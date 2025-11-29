@class NSArray, WCAdLiteAppInfo;

@interface WCAdFeedbackInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSArray *feedbackList;
@property (retain, nonatomic) WCAdLiteAppInfo *receivedReasonClickAction;
@property (retain, nonatomic) WCAdLiteAppInfo *likedAdsClickAction;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)validFeedbackList;
- (long long)validFeedbackCnt;
- (void).cxx_destruct;

@end
