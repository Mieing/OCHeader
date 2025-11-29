@class RichTextView, NSString, UIImageView, UIImage, UILabel, MMUIButton, UIView;

@interface WCFinderCardEduActionSheet : WCActionSheet

@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) MMUIButton *closeBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) RichTextView *descTextView;
@property (retain, nonatomic) UIImageView *eduImageView;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *descString;
@property (retain, nonatomic) UIImage *cardImage;

- (double)heightOfWholeSheet;
- (double)getCustomView:(double)a0;
- (id)getTipsActionSheetView;
- (void)didClickClose;
- (void).cxx_destruct;

@end
