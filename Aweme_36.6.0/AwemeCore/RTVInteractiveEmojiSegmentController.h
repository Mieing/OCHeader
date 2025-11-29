@class NSString, RTVUISectionModel;
@protocol RTVChatController, RTVCollectionViewControllerSegmentControllerDelegate, RTVEmoticonDataManagerInterface, RTVXRControllerInjector, RTVInteractionConfigureManagerInterface;

@interface RTVInteractiveEmojiSegmentController : NSObject <RTVCollectionViewControllerSegmentController>

@property (readonly, nonatomic) id<RTVEmoticonDataManagerInterface> emoticonDataManager;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (retain, nonatomic) RTVUISectionModel *sectionModel;
@property (readonly, weak, nonatomic) id<RTVChatController> chatController;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> configureManager;
@property (weak, nonatomic) id<RTVCollectionViewControllerSegmentControllerDelegate> segmentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getInKey;
- (void)rtv_awakeFromControllerInjector;
- (void)registReusableViewForCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })itemSizeForCollectionView:(id)a0 withCellModel:(id)a1;
- (void)collectionView:(id)a0 didSelectCellModel:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 insetForSectionIdentifier:(id)a1;
- (double)collectionView:(id)a0 minimumLineSpacingForSectionIdentifier:(id)a1;
- (id)__emotionCellIdentifier;
- (id)cellModels;
- (void).cxx_destruct;
- (void)__sendMessage:(id)a0;
- (id)sectionModels;

@end
