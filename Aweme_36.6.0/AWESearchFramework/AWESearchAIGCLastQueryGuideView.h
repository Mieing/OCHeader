@class AWESearchAIGCLastQueryGuideViewModel, UIImageView, NSString, UIView, UILabel;
@protocol AWESearchAIGCLastQueryGuideViewDelegate;

@interface AWESearchAIGCLastQueryGuideView : UIView <AWESearchAIGCLastQueryGuideAction>

@property (retain, nonatomic) AWESearchAIGCLastQueryGuideViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *historyIconView;
@property (retain, nonatomic) UIImageView *arrowRightIconView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *queryVideoConverImageView;
@property (retain, nonatomic) UIImageView *queryVideoPlayIcon;
@property (weak, nonatomic) id<AWESearchAIGCLastQueryGuideViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)failPlaceholderImage;
+ (id)loadingPlaceholderImage;

- (void)updateSubviewsLayout;
- (void)bindActions;
- (void)lastQueryGuideRemoveIfNeed;
- (id)lastQueryGuideCurrentQuery;
- (void)lastQueryGuideUpdateWithComplete:(id /* block */)a0;
- (id)lastQueryGuideLogPB;
- (BOOL)showVideoConverImage:(id)a0;
- (struct CGSize { double x0; double x1; })videoConverViewSize:(id)a0;
- (void)updateUIWithQuery:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
