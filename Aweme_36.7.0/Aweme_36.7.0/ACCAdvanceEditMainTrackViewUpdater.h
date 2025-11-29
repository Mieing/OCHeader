@class ACCAdvanceEditMainTrackDataSource, ACCAdvanceEditAsyncService;
@protocol ACCTrimCropSequencePieceServiceProtocol, ACCTrimCropEditorFlagProtocol, IESServiceProvider;

@interface ACCAdvanceEditMainTrackViewUpdater : NSObject

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (weak, nonatomic) id<ACCTrimCropEditorFlagProtocol> editorFlagService;
@property (retain, nonatomic) ACCAdvanceEditMainTrackDataSource *dataSource;
@property (retain, nonatomic) ACCAdvanceEditAsyncService *asyncService;
@property (copy, nonatomic) id /* block */ refreshFrameBlock;

- (void)setupObserver;
- (void)reloadDataWithSlotFrameCount:(long long)a0 completion:(id /* block */)a1;
- (id)initWithDataSource:(id)a0 serviceProvider:(id)a1;
- (void).cxx_destruct;

@end
