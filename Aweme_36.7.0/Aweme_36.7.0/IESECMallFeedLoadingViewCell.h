@class NSString, NSDictionary, IESECMallSkeletonLoadingView, UIView, IESECMallErrorView;
@protocol IESECUILoadingViewProtocol;

@interface IESECMallFeedLoadingViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView<IESECUILoadingViewProtocol> *loadingView;
@property (retain, nonatomic) IESECMallErrorView *errorView;
@property (retain, nonatomic) IESECMallSkeletonLoadingView *skeletonLoadingView;
@property (copy, nonatomic) NSDictionary *curTabInfo;
@property (copy, nonatomic) NSString *nativeCellEnvIdentifier;

- (void).cxx_destruct;
- (void)updateData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
