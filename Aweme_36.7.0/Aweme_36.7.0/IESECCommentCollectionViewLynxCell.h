@class UIView, NSString, IESECCommentLynxCardManager;

@interface IESECCommentCollectionViewLynxCell : UICollectionViewCell <IESECCommentLynxCardManagerDelegate>

@property (weak, nonatomic) IESECCommentLynxCardManager *manager;
@property (weak, nonatomic) UIView *lynxView;
@property (copy, nonatomic) id /* block */ needUpdateLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)needUpdateWithLynxCardManager:(id)a0;
- (void)loadLynxCardManager:(id)a0;
- (void).cxx_destruct;

@end
