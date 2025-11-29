@class NSString, UIImageView, UILabel, MMUISpacer;

@interface WXKeyBoardTipsView : UIStackView <MMNewTipsMgrExt> {
    NSString *m_tipsText;
    NSString *m_pathKey;
    int m_scene;
}

@property (retain, nonatomic) UILabel *wxKeyboardTipsLabel;
@property (retain, nonatomic) MMUISpacer *reddotSpacer;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (copy, nonatomic) id /* block */ ClickTipsViewAction;
@property (readonly, nonatomic) BOOL hasReddot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tipsViewWithScene:(unsigned int)a0;

- (id)initWithText:(id)a0 pathKey:(id)a1;
- (id)initWithText:(id)a0 pathKey:(id)a1 scene:(int)a2;
- (void)initViews;
- (double)innerMargin;
- (struct CGSize { double x0; double x1; })preferSize;
- (void)handleClickButton;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)onTipsShowInfoChangeWithPathKey:(id)a0;
- (void).cxx_destruct;

@end
