@class UIView, AWECaptionInfoModel, NSString, UIImageView, NSDictionary, UIButton, AWEURLModel, UILabel;

@interface AWEHPSearchBubbleEntranceView : UIControl

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *searchIcon;
@property (retain, nonatomic) UIView *focusView;
@property (retain, nonatomic) UIImageView *captionIcon;
@property (retain, nonatomic) UIView *separatorLine;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *authorId;
@property (retain, nonatomic) NSDictionary *logPb;
@property (retain, nonatomic) AWECaptionInfoModel *captionInfo;
@property (nonatomic) int showStyle;
@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (copy, nonatomic) id /* block */ searchButtonDidClick;

+ (double)bubbleWidthWithText:(id)a0 iconUrl:(id)a1 showStyle:(int)a2;

- (void)setupControl;
- (void)searchIconClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
