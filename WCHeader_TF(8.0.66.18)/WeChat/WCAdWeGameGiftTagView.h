@class WCDataItem, WCAdURLImageView, MMUILabel, MMUIButton, WCAdWeGameGiftTagInfo;

@interface WCAdWeGameGiftTagView : MMUIView

@property (retain, nonatomic) WCAdWeGameGiftTagInfo *tagInfo;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long contentItemScene;
@property (retain, nonatomic) MMUIButton *containerView;
@property (retain, nonatomic) WCAdURLImageView *iconView;
@property (retain, nonatomic) MMUILabel *mainTitleView;
@property (retain, nonatomic) WCAdURLImageView *tailIconView;
@property (retain, nonatomic) MMUILabel *tailTitleView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tagInfo:(id)a1 dataItem:(id)a2 contentItemScene:(unsigned long long)a3;
- (void)initView;
- (double)mainTitleMaxWidth;
- (void)adjustView;
- (id)createLabel:(id)a0 font:(id)a1 textColor:(id)a2;
- (BOOL)hasIcon;
- (BOOL)hasTailIcon;
- (void)onClickButton:(id)a0;
- (void).cxx_destruct;

@end
