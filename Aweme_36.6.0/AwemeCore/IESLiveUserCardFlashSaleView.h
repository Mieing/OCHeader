@class UILabel, IESLiveUserCardStore, NSString;

@interface IESLiveUserCardFlashSaleView : UIView <IESLiveUserCardConfigProtocol>

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithTag:(long long)a0 isShowWhite:(BOOL)a1;
- (void)configWithStore:(id)a0;
- (void)onActionClicked:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)shouldShow;

@end
