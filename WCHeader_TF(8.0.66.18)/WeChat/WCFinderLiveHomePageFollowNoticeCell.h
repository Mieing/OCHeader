@class MMWebImageView, NSString, WCFinderHeadImageView, WCFinderLiveGenericFeedVM, UILabel, UIView, MMUILabel;

@interface WCFinderLiveHomePageFollowNoticeCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveFeedGenericCardCellProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *markLabel;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) MMUILabel *nickNameLabel;
@property (retain, nonatomic) UIView *headImageBorderView;
@property (retain, nonatomic) UILabel *noticeTimeLabel;
@property (retain, nonatomic) WCFinderLiveGenericFeedVM *feedVM;
@property (readonly, nonatomic) MMWebImageView *liveImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;
+ (double)cellHeightInWidth:(double)a0 styleInfo:(id)a1;
+ (double)cellWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViewsIfNeeded;
- (void)updateStyle;
- (void)prepareForReuse;
- (void)updateWithFeedVM:(id)a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)getQuickNoticeStringWithTs:(unsigned int)a0;
- (id)getNoticeStringWithTs:(unsigned int)a0;
- (void).cxx_destruct;

@end
