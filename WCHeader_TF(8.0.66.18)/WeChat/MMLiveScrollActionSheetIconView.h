@class NSString, UIImage, MMUIButton, MMUILabel;

@interface MMLiveScrollActionSheetIconView : MMLiveScrollActionSheetItemView {
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
}

@property (retain, nonatomic) MMUIButton *iconButton;
@property (retain, nonatomic) UIImage *iconImg;
@property (retain, nonatomic) UIImage *cornerImg;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;

- (id)initWithItem:(id)a0;
- (void)reloadItem:(id)a0;
- (void)reloadData;
- (void)onTaped;
- (void).cxx_destruct;

@end
