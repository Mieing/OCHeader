@class NSSet;

@interface BDACSPornInspectProcessor : BDACSBaseProcessor

@property (readonly, copy, nonatomic) NSSet *contentTypes;

- (BOOL)shouldSaveFileItem:(id)a0;
- (BOOL)shouldRemoveFileItem:(id)a0 processorType:(unsigned long long)a1;
- (void)dataCollectorDidSaveFile:(id)a0;
- (void)dataCollectorDeallocating;
- (id)initWithConfig:(id)a0 webURLString:(id)a1 resourceManager:(id)a2;
- (BOOL)shouldUploadFileByTrackInspectStatus;
- (id)generateManifest;
- (void).cxx_destruct;

@end
