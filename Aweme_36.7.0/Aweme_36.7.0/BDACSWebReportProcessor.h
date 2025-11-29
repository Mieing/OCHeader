@class BDAThreadSafeDictionary, NSSet;

@interface BDACSWebReportProcessor : BDACSBaseProcessor

@property (readonly, nonatomic) BDAThreadSafeDictionary *filenames;
@property (readonly, copy, nonatomic) NSSet *contentTypes;

- (BOOL)shouldSaveFileItem:(id)a0;
- (BOOL)shouldRemoveFileItem:(id)a0 processorType:(unsigned long long)a1;
- (void)dataCollectorDidSaveFile:(id)a0;
- (void)dataCollectorDeallocating;
- (id)initWithConfig:(id)a0 webURLString:(id)a1 resourceManager:(id)a2;
- (id)generateManifest;
- (void).cxx_destruct;

@end
