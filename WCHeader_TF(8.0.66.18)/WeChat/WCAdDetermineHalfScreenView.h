@class WCAdURLImageView, NSString, WCAdDetermineHalfScreenInfo, MMUILabel;
@protocol WCAdDetermineHalfScreenViewDelegate;

@interface WCAdDetermineHalfScreenView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) WCAdDetermineHalfScreenInfo *determineInfo;
@property (retain, nonatomic) WCAdURLImageView *iconView;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (weak, nonatomic) id<WCAdDetermineHalfScreenViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDetermineInfo:(id)a0;
- (void)initCommonUI;
- (void)initDetermineUI;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)pageSheetDidDisappear;
- (void)pageSheetDidClose:(BOOL)a0;
- (void).cxx_destruct;

@end
