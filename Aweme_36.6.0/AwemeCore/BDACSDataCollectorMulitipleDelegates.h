@class NSArray, NSString;
@protocol BDACSDataCollectorDelegate;

@interface BDACSDataCollectorMulitipleDelegates : NSObject <BDACSDataCollectorDelegate>

@property (readonly, copy, nonatomic) NSArray<BDACSDataCollectorDelegate> *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegates:(id)a0;
- (BOOL)shouldSaveFileItem:(id)a0;
- (BOOL)shouldRemoveFileItem:(id)a0 processorType:(unsigned long long)a1;
- (void)dataCollectorDidSaveFile:(id)a0;
- (void)dataCollectorDeallocating;
- (void).cxx_destruct;

@end
