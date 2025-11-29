@class AWEProfileExtensionAreaProgressBar, NSString, AWEGradientView, UIView;
@protocol AWEProfileEAVajraViewHolderProtocol;

@interface AWEProfileEAVajraSupplementedViewComponent : AWEProfileEABaseController <AWEProfileEACollectionViewEvent, AWEProfileEADataSourceEvent>

@property (retain, nonatomic) AWEProfileExtensionAreaProgressBar *progressBar;
@property (retain, nonatomic) UIView *leftMaskFixView;
@property (retain, nonatomic) UIView *rightMaskFixView;
@property (retain, nonatomic) AWEGradientView *leftMaskGradientView;
@property (retain, nonatomic) AWEGradientView *rightMaskGradientView;
@property (weak, nonatomic) id<AWEProfileEAVajraViewHolderProtocol> viewHolder;
@property (nonatomic) BOOL collectionViewScrollable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cardDataSourceDidRefresh;
- (void)setupMaskViews;
- (void)createProgressBarIfNeeded;
- (void)syncProgressBar;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)updateVisibility:(BOOL)a0;

@end
