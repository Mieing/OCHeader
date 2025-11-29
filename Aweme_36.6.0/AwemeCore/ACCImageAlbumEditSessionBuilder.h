@class NSHashTable, NSString, AWEVideoPublishViewModel;
@protocol ACCImageAlbumEditorSessionProtocol;

@interface ACCImageAlbumEditSessionBuilder : NSObject <ACCEditSessionBuilderProtocol>

@property (retain, nonatomic) id<ACCImageAlbumEditorSessionProtocol> editSession;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) NSHashTable *subscribers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPublishModel:(id)a0;
- (void)addEditSessionListener:(id)a0;
- (id)buildEditSessionWithContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_updateImageAlbumData;
- (id)initWithInputData:(id)a0;
- (void).cxx_destruct;

@end
