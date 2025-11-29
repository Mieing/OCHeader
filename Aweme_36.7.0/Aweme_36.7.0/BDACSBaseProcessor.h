@class BDAThreadSafeArray, NSString, BDACSResourceManager, BDACSConfigModel;

@interface BDACSBaseProcessor : NSObject <BDACSDataCollectorDelegate>

@property (readonly, copy, nonatomic) NSString *webURLString;
@property (readonly, nonatomic) BDACSConfigModel *config;
@property (readonly, nonatomic) BDACSResourceManager *resourceManager;
@property (readonly, nonatomic) BDAThreadSafeArray *fileInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParams;
- (BOOL)shouldSaveFileItem:(id)a0;
- (BOOL)shouldRemoveFileItem:(id)a0 processorType:(unsigned long long)a1;
- (void)dataCollectorDidSaveFile:(id)a0;
- (void)dataCollectorDeallocating;
- (id)initWithConfig:(id)a0 webURLString:(id)a1 resourceManager:(id)a2;
- (void).cxx_destruct;

@end
