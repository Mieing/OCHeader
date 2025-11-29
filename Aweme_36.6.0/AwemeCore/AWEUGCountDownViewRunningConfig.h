@class NSString;

@interface AWEUGCountDownViewRunningConfig : NSObject

@property (nonatomic) long long resourceType;
@property (copy, nonatomic) NSString *iconImageUrl;
@property (copy, nonatomic) NSString *iconLottieUrl;
@property (copy, nonatomic) NSString *iconLottieMD5;
@property (nonatomic) long long lottiePlayType;
@property (copy, nonatomic) NSString *expandIconUrl;
@property (copy, nonatomic) NSString *foldIconUrl;
@property (copy, nonatomic) NSString *labelText;
@property (copy, nonatomic) NSString *labelFoldText;
@property (nonatomic) BOOL hasFeedBack;
@property (copy, nonatomic) NSString *feedBackSchema;
@property (nonatomic) double foldAfterTime;

- (void).cxx_destruct;

@end
