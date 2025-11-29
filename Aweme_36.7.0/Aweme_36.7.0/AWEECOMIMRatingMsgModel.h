@class NSDictionary, NSString, AWEECOMIMRateServiceModel;

@interface AWEECOMIMRatingMsgModel : AWEECOMIMBaseMsgModel

@property (retain, nonatomic) AWEECOMIMRateServiceModel *rateServiceModel;
@property (copy, nonatomic) NSDictionary *resultDict;
@property (copy, nonatomic) NSString *themeTitle;

+ (Class)cellClass;

- (void)updateRateServiceModel;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
