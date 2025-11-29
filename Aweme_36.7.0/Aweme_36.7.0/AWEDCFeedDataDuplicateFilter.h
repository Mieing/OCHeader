@class NSString, NSMutableSet, AWEDCFeedPageContext;

@interface AWEDCFeedDataDuplicateFilter : NSObject <AWEDCFeedDataProcessorProtocol>

@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (retain, nonatomic) NSMutableSet *filteredIDSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)filterDataArrayWithRequestType:(unsigned long long)a0 dataArray:(id)a1 args:(id)a2;
- (id)duplicateFilterConfig;
- (id)classNameWithReferString;
- (void).cxx_destruct;
- (void)removeItemIDs:(id)a0;
- (void)setupWithContext:(id)a0;

@end
