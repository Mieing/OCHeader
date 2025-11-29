@class ACCCreationToolDataEditorExporter, NSString, ACCCreationToolDataAlbumExporter, UIView, ACCCreationToolDataRecorderExporter, AWEVideoPublishViewModel;
@protocol ACCTextLoadingViewProtcol, ACCSequenceEditServiceProtocol;

@interface ACCCreationToolData : NSObject <ACCCreationDataInternalProtocol>

@property (weak, nonatomic) UIView<ACCTextLoadingViewProtcol> *showingLoadingView;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) ACCCreationToolDataAlbumExporter *batchAlbumExporter;
@property (retain, nonatomic) ACCCreationToolDataAlbumExporter *singleAlbumExporter;
@property (retain, nonatomic) ACCCreationToolDataRecorderExporter *recorderExporter;
@property (retain, nonatomic) ACCCreationToolDataEditorExporter *editorExporter;
@property (retain, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (readonly, nonatomic) unsigned long long itemCount;
@property (readonly, copy, nonatomic) NSString *musicID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ dismissCallback;

- (id)exportItemAtIndex:(unsigned long long)a0 onCompletion:(id /* block */)a1;
- (void)showLoadingAfterDelay:(double)a0 withCancelBlock:(id /* block */)a1;
- (void)dismissLoadingView;
- (void)dismissAnimated:(BOOL)a0 onCompletion:(id /* block */)a1;
- (id)itemDataInfoAtIndex:(unsigned long long)a0;
- (void)exportShootPhotoFramePathOnCompletion:(id /* block */)a0;
- (id)exportAllItemsOnCompletion:(id /* block */)a0;
- (id)exportAlbumItemWithIndexList:(id)a0 onCompletion:(id /* block */)a1;
- (void)cancelWithToken:(id)a0;
- (void)dismissNavigation:(id)a0 animated:(BOOL)a1;
- (void)doBlock:(id /* block */)a0 withinTransactionOnCompletion:(id /* block */)a1;
- (void)dismissModalStackWithViewController:(id)a0 animated:(BOOL)a1 onCompletion:(id /* block */)a2;
- (void)exitCurrentPageAnimated:(BOOL)a0 onCompletion:(id /* block */)a1;
- (void)getReusableOutput:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
