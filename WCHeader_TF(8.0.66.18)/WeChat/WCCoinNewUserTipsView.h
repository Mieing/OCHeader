@class NSString, WCCoinNewUserTipsDetailView, WecoinNewUserTips;

@interface WCCoinNewUserTipsView : MMPageSheetBaseViewController <WCCoinNewUserTipsDetailViewDelegate>

@property (retain, nonatomic) WecoinNewUserTips *tips;
@property (retain, nonatomic) WCCoinNewUserTipsDetailView *tipsDetailView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
