@class MMUIButton;
@protocol ShakeTypeBarDelegate;

@interface ShakeTypeBar : MMUIView {
    MMUIButton *m_shakePeopleBtn;
    MMUIButton *m_shakeMusicBtn;
    unsigned int m_curSelectTag;
    BOOL isShowPeople;
    BOOL isShowShakeMusic;
    unsigned int uiBtnCount;
}

@property (weak, nonatomic) id<ShakeTypeBarDelegate> m_delegate;
@property (nonatomic) BOOL isUserClickedBtn;

- (id)init;
- (void)setShakeType:(long long)a0;
- (void)updateData;
- (void)updateSelfState;
- (void)initView;
- (id)createBtnWithTitle:(id)a0 Icon:(id)a1 HighlightIcon:(id)a2 Frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 Action:(SEL)a4 Tag:(int)a5;
- (void)allTouchEvent:(id)a0;
- (void)onBtnClicked:(id)a0;
- (void)processBtnClicked:(id)a0;
- (void).cxx_destruct;

@end
