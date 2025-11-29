@class UIColor, NSString, UIImageView, UILabel, UIView;

@interface AWEFeedSameStyleShootView : UIView <AWEFeedSameStyleShootViewProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) double originAlpha;
@property (retain, nonatomic) UIColor *toColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTips:(id)a0;
- (void)initBackgroundColor;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)updateBackgroundColor;
- (id)init;
- (id)defaultBackgroundColor;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
