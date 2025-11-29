@class NSArray, ACCCreationToolDataVideoExporter;
@protocol ACCPublishMergeImageHelperProtocol;

@interface ACCCreationToolDataEditorExporter : ACCCreationToolDataExporter

@property (retain, nonatomic) id<ACCPublishMergeImageHelperProtocol> holdingImageMerger;
@property (retain, nonatomic) ACCCreationToolDataVideoExporter *videoExporter;
@property (retain, nonatomic) NSArray *batchImageMergeTaskTokenArray;

+ (id)batchImageMergeToken;

- (id)exportItemAtIndex:(unsigned long long)a0 onCompletion:(id /* block */)a1;
- (id)exportAllItemsOnCompletion:(id /* block */)a0;
- (void)cancelWithToken:(id)a0;
- (void).cxx_destruct;

@end
