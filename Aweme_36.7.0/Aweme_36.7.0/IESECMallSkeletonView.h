@class NSDictionary, IESECMallSkeletonCellView, NSString;

@interface IESECMallSkeletonView : UIView <IESECMallLoadingViewProtocol>

@property (retain, nonatomic) IESECMallSkeletonCellView *rootView;
@property (retain, nonatomic) NSDictionary *skeletonConfig;
@property (nonatomic) BOOL canShowMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithDict:(id)a0;

- (void)setupUIFromConfig:(id)a0;
- (id)updateSkeletonViewWithModel:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConfig:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)show;
- (void)setupUI;

@end
