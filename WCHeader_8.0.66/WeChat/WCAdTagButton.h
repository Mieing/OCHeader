@class WCAdURLImageView, WCAdTagButtonInfo, WCDataItem, UIButton;
@protocol WCAdTagButtonDelegate;

@interface WCAdTagButton : UIView

@property (retain, nonatomic) WCAdTagButtonInfo *tagInfo;
@property (nonatomic) long long cardType;
@property (nonatomic) unsigned long long contentItemScene;
@property (retain, nonatomic) WCAdURLImageView *bgImageView;
@property (retain, nonatomic) UIButton *topButton;
@property (retain, nonatomic) WCAdURLImageView *topButtonIcon;
@property (weak, nonatomic) id<WCAdTagButtonDelegate> delegate;
@property (retain, nonatomic) WCDataItem *dataItem;

+ (struct CGSize { double x0; double x1; })calcTagButtonSizeForTagInfo:(id)a0 maxWidth:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tagInfo:(id)a1 cardType:(long long)a2 contentItemScene:(unsigned long long)a3;
- (void)generateSubviews;
- (void)layoutSubviews;
- (BOOL)hasBgImageView;
- (BOOL)hasIcon;
- (BOOL)hasTitle;
- (void)onClickTopButton:(id)a0;
- (void).cxx_destruct;

@end
