@class WCFinderFeedContentTextView, CContact, UIImageView, UILabel, UIView, TextStateItemView;
@protocol TextStateBaseNotifyInfo, TextStateLikeCellContentViewDelegate;

@interface TextStateLikeCellContentView : UIView

@property (retain, nonatomic) id<TextStateBaseNotifyInfo> info;
@property (retain, nonatomic) UILabel *timelabel;
@property (retain, nonatomic) UIView *picImageView;
@property (retain, nonatomic) UILabel *usernameLabel;
@property (retain, nonatomic) UILabel *referenceLabel;
@property (retain, nonatomic) UIImageView *emojiImageView;
@property (retain, nonatomic) UIView *headImageView;
@property (retain, nonatomic) TextStateItemView *iconView;
@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) WCFinderFeedContentTextView *textView;
@property (weak, nonatomic) id<TextStateLikeCellContentViewDelegate> delegate;
@property (nonatomic) BOOL shouldShowPreview;

+ (double)getCellHight;

- (void)configInfo:(id)a0;
- (id)createItemView;
- (id)createWebImageViewWithUrl:(id)a0;
- (id)createHeadImageViewWithUserName:(id)a0;
- (void)onClickHeadImage;
- (id)generatePicImageView;
- (id)generatePicImageViewInner:(id)a0 mediaItem:(id)a1 iconDescription:(id)a2;
- (id)genTextStateByCommentThumbMessage:(id)a0;
- (void).cxx_destruct;

@end
