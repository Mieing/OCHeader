@class NSString, AWEAwemeModel, UIView, UIViewController;
@protocol UIScrollViewDelegate, AWEFeedTableViewCellViewControllerProtocol;

@interface AWELivePreviewDefaultCell : AWELiveEmptyTableViewCell <AWEFeedTableViewCellProtocol, AWEAwemeDetailCellMaskProtocol>

@property (nonatomic) long long indexPath;
@property (readonly, nonatomic) UIViewController<AWEFeedTableViewCellViewControllerProtocol> *viewController;
@property (weak, nonatomic) UIViewController *parentVC;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *registerElementModel;
@property (nonatomic) long long cellDisplayState;
@property (nonatomic) long long cellPageAppearState;
@property (copy, nonatomic) id /* block */ currentCellPageAppearStateBlock;
@property (nonatomic) struct EngineAudioWrapper { } *audioWrapper;
@property (nonatomic) struct EngineVideoWrapper { } *videoWrapper;
@property (nonatomic) BOOL didResetForReusable;
@property (retain, nonatomic) UIView *feedTableViewCellMaskView;
@property (readonly, weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) BOOL hadPrepareToDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void)showLastCellMaskView:(BOOL)a0;
- (void)configLastCellMaskViewWithTitle:(id)a0 backHintText:(id)a1 backAction:(id /* block */)a2;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)reset;
- (BOOL)conformsToProtocol:(id)a0;
- (void)configureWithModel:(id)a0;

@end
