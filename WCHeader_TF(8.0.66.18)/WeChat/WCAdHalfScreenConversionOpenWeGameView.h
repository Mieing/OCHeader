@class WCAdURLImageView, NSString, WCAdOpenWeGameHalfScreenInfo, MMUILabel;

@interface WCAdHalfScreenConversionOpenWeGameView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) WCAdOpenWeGameHalfScreenInfo *halfScreenInfo;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (retain, nonatomic) WCAdURLImageView *gameIconView;
@property (retain, nonatomic) MMUILabel *gameTitleView;
@property (retain, nonatomic) MMUILabel *giftNameView;
@property (retain, nonatomic) MMUILabel *tipWordingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHalfScreenInfo:(id)a0 resultBlock:(id /* block */)a1;
- (void)initCommonUI;
- (void)initDetailUI;
- (id)createLabel:(id)a0 height:(double)a1 font:(id)a2 textColor:(id)a3;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)pageSheetDidClose:(BOOL)a0;
- (void).cxx_destruct;

@end
