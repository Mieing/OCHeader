@class UIView, MMWebImageView, FinderMusicTopicInfo, WCFinderDataItem, WCFinderAuthInfoIconView, RichTextView, UILabel, MMUIButton;
@protocol WCFinderMusicCardBriefViewDelegate;

@interface WCFinderMusicCardBriefView : MMUIView

@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) MMWebImageView *mediaBkgImage;
@property (retain, nonatomic) RichTextView *songNameTextView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) MMUIButton *joinButton;
@property (retain, nonatomic) FinderMusicTopicInfo *musicTopicInfo;
@property (retain, nonatomic) WCFinderDataItem *fromDataItem;
@property (weak, nonatomic) id<WCFinderMusicCardBriefViewDelegate> delegate;

+ (id)buildTitleTextView:(double)a0;
+ (double)height;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithMusicTopicInfo:(id)a0 fromDataItem:(id)a1 shareItemInfo:(id)a2;
- (void)layoutSubviews;
- (void)layoutAllSubviews;
- (void)onClickAuthorView;
- (void)joinButtonClicked;
- (BOOL)enableShow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
