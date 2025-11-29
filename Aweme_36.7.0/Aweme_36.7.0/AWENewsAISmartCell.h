@class AWENewsAISmartCellModel, NSString, AWECommonFeedSectionContext, UIView;
@protocol HunterContainerProtocol;

@interface AWENewsAISmartCell : UICollectionViewCell <HunterContainerLifeCycleProtocol, AWECommonFeedCellProtocol>

@property (retain, nonatomic) UIView<HunterContainerProtocol> *containerView;
@property (nonatomic) BOOL cellHasReuse;
@property (copy, nonatomic) id /* block */ updateHeightBlock;
@property (retain, nonatomic) AWENewsAISmartCellModel *cellModel;
@property (nonatomic) BOOL isFirstCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWECommonFeedSectionContext *context;

- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerDidPageUpdate:(id)a0;
- (void)configCellWithContext:(id)a0 cellModel:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasVideo;

@end
