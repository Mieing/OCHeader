@class UIColor, NSString, UIImageView, TTTAttributedLabel, UIImage, NSArray, UITapGestureRecognizer;
@protocol AWEFeedBackEntranceDelegate;

@interface AWEFeedBackEntranceView : UIView <TTTAttributedLabelDelegate>

@property (retain, nonatomic) TTTAttributedLabel *contentLabel;
@property (retain, nonatomic) UIImageView *rightImageView;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *imageURL;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (copy, nonatomic) NSArray *modelArray;
@property (weak, nonatomic) id<AWEFeedBackEntranceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attributedLabel:(id)a0 didSelectLinkWithURL:(id)a1;
- (void)configContentLabel;
- (void)imageTapped;
- (void)setImage:(id)a0 imageURL:(id)a1;
- (void)setNormalTextColor:(id)a0 highlightTextColor:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)commonInit;

@end
