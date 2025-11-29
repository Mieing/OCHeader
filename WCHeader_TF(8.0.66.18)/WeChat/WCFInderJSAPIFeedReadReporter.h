@class NSString, NSMutableSet;

@interface WCFInderJSAPIFeedReadReporter : NSObject <WCFinderStatReportShim>

@property (copy, nonatomic) id /* block */ reportAction;
@property (retain, nonatomic) NSMutableSet *recards;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reportWithAction:(id /* block */)a0;

- (id)init;
- (id)generateReportInfo;
- (void)commit;
- (id)popInfo;
- (void)onUpdateStatMetaModel:(id)a0;
- (BOOL)filterShouldRecardStatMetaModel:(id)a0;
- (void).cxx_destruct;

@end
