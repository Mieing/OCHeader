@class ACCCreationToolDataVideoExporter;

@interface ACCCreationToolDataRecorderExporter : ACCCreationToolDataExporter

@property (retain, nonatomic) ACCCreationToolDataVideoExporter *videoExporter;

- (id)exportItemOnCompletion:(id /* block */)a0;
- (void)cancelWithToken:(id)a0;
- (id)mergeImagePathWithTaskID:(id)a0 uuid:(id)a1;
- (void).cxx_destruct;

@end
