@class MMUIButton, UIView, WCFinderFeedContentVM, WCFinderGradientView, WCFinderFeedImageCDNView, UIImageView, WCFinderCollectionFeedItemConfiguration, NSString, RichTextView, WCFinderCollectionFeedCellConfig, UILabel, WCFinderLinearView;
@protocol UIContentConfiguration;

@interface WCFinderCollectionFeedItemContentView : UIView <WCFinderFeedContentVMExt, UIContentView>

@property (retain, nonatomic) WCFinderCollectionFeedItemConfiguration *appliedConfiguration;
@property (readonly, nonatomic) WCFinderFeedContentVM *contentVM;
@property (readonly, nonatomic) WCFinderCollectionFeedCellConfig *config;
@property (retain, nonatomic) WCFinderFeedImageCDNView *coverView;
@property (retain, nonatomic) UILabel *episodeLabel;
@property (retain, nonatomic) RichTextView *textView;
@property (retain, nonatomic) WCFinderLinearView *descLineContainer;
@property (retain, nonatomic) UIImageView *likeCountIconView;
@property (retain, nonatomic) UILabel *likeCountLabel;
@property (retain, nonatomic) MMUIButton *memberFlagButton;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UILabel *watchProgressLabel;
@property (retain, nonatomic) UIView *playingMaskView;
@property (retain, nonatomic) WCFinderGradientView *coverGradient;
@property (retain, nonatomic) UILabel *needPayTag;
@property (nonatomic) double layoutWidth;
@property (retain, nonatomic) UILabel *watchedAtLastTimeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id<UIContentConfiguration> configuration;

- (id)initWithConfiguration:(id)a0;
- (void)setupUI;
- (void)setupSubUIs;
- (void)layoutSubviews;
- (void)_applyConfiguration:(id)a0;
- (void)updateDescLines;
- (void)updateLikeCountBtn;
- (void)updateLikeCountBtnIfNeed;
- (void)layoutUI;
- (BOOL)shouldShowNeedPayTag;
- (void)onFeedContent:(id)a0 likedDataChanged:(id)a1;
- (id)createWatchedAtLastTimeLabel;
- (void).cxx_destruct;

@end
