@class CJPayAppUserInfo;

@interface CJPayDyPayRecommendAccountSwitchViewModel : CJPayDyPayRecommendAccountViewModel

@property (retain, nonatomic) CJPayAppUserInfo *currentUserInfo;
@property (retain, nonatomic) CJPayAppUserInfo *recommendUserInfo;

- (id)initWithRecommendPopup:(id)a0 appUserInfo:(id)a1;
- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;

@end
