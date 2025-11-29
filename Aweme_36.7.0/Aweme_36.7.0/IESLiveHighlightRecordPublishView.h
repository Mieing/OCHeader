@class UIImageView, IESLiveCustomButton, UIView, UILabel, IESLiveHighlightItemModel;
@protocol IESLiveHighlightRecordPublishViewDelegate;

@interface IESLiveHighlightRecordPublishView : UIView

@property (retain, nonatomic) IESLiveHighlightItemModel *highlightItem;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UILabel *backLabel;
@property (retain, nonatomic) UILabel *draftLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) IESLiveCustomButton *downloadBtn;
@property (retain, nonatomic) UIView *publishBtn;
@property (retain, nonatomic) UILabel *publishLabel;
@property (retain, nonatomic) UIImageView *publishingIcon;
@property (nonatomic) BOOL isPublishing;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (weak, nonatomic) id<IESLiveHighlightRecordPublishViewDelegate> delegate;

- (void)tapPublishBtn;
- (void)addPublishLoadingAnimation;
- (id)initWithHighlight:(id)a0 diContext:(id)a1;
- (void)tapBackLabel;
- (void)tapDraftLabel;
- (void)tapDownloadBtn;
- (void)tapCoverImageView;
- (void).cxx_destruct;
- (void)setupViews;

@end
