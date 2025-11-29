@class NSString, NSMutableSet, NSHashTable;
@protocol ACCVideoCoverModernEditorSessionProtocol;

@interface ACCEditVideoCoverMixedWrapper : NSObject <ACCVideoCoverEditBuildListener, ACCEditVideoCoverMixedProtocol>

@property (weak, nonatomic) id<ACCVideoCoverModernEditorSessionProtocol> player;
@property (retain, nonatomic) NSHashTable *subscriberArray;
@property (retain, nonatomic) NSMutableSet *stopPlayFlagKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEditSessionInit:(id)a0;
- (void)setEditSessionProvider:(id)a0;
- (void)resetWithContainerView:(id)a0;
- (long long)currentImageEditorIndex;
- (id)currentImageItemModel;
- (id)currentImageEditorContentView;
- (long long)totalImagePlayerImageCount;
- (void)reloadCurrentPlayerItem;
- (void).cxx_destruct;
- (id)init;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
