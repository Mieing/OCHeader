@class ShakeGetItem, UIImageView, UIView, UILabel, MMHeadImageView;
@protocol shakeSingleViewDelegate;

@interface ShakeSingleView : MMUIView <IHeadImageExt> {
    UIView *m_bkgView;
    UIImageView *m_indicatorImageView;
    UIImageView *m_sexImageView;
    MMHeadImageView *m_headImageView;
    UILabel *m_labelLoc;
    UILabel *m_labelNickName;
    UILabel *m_labelCity;
    UILabel *m_labelFriend;
    ShakeGetItem *m_oShakeGetItem;
    unsigned int m_uiScene;
    id<shakeSingleViewDelegate> m_delegate;
}

@property (retain, nonatomic) UIView *coverView;

- (void)setM_Delegate:(id)a0;
- (void)stopAllAnimation;
- (void)finishShowAnimation;
- (void)doShowAnimation;
- (BOOL)isInMyContactList:(id)a0;
- (id)initWithItem:(id)a0 andScene:(unsigned int)a1;
- (BOOL)isPointInView:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isClickHead:(struct CGPoint { double x0; double x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
