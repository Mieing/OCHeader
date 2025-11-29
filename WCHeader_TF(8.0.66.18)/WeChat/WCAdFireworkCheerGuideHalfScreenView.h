@class WCAdURLImageView, NSString, WCAdFireworkCheerGuideHalfScreenInfo, MMUILabel;

@interface WCAdFireworkCheerGuideHalfScreenView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) WCAdFireworkCheerGuideHalfScreenInfo *halfScreenInfo;
@property (retain, nonatomic) WCAdURLImageView *iconView;
@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) MMUILabel *descView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHalfScreenInfo:(id)a0;
- (void)initCommonUI;
- (void)initDetailUI;
- (id)createLabel:(id)a0 height:(double)a1 font:(id)a2 textColor:(id)a3;
- (double)fetchLabelHeight:(id)a0 maxWidth:(double)a1 font:(id)a2 lineHeight:(double)a3;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void).cxx_destruct;

@end
