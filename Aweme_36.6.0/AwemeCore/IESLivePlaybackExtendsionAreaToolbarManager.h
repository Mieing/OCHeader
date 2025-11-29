@class NSArray, UIView, NSMutableArray, IESLivePanelCollectionView;

@interface IESLivePlaybackExtendsionAreaToolbarManager : NSObject

@property (retain, nonatomic) NSMutableArray *currentItem;
@property (copy, nonatomic) NSArray *lynxToolbarRules;
@property (retain, nonatomic) IESLivePanelCollectionView *collectionView;
@property (retain, nonatomic) UIView *containerView;

+ (id)shareManager;

- (void)didSetAttachingDIContext;
- (void)setupSubView;
- (id)createLynxToolbarRules;
- (void)reloadData;
- (void).cxx_destruct;
- (void)removeItem:(id)a0;
- (void)insertItem:(id)a0;
- (id)init;
- (void)resetData;
- (id)currentView;

@end
