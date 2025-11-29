@class NSString;
@protocol AWEClientAIEventAnalysisService;

@interface AWEClientAIAppLogHelper : NSObject <AWEClientAIAppLogHelper>

@property (retain, nonatomic) id<AWEClientAIEventAnalysisService> eventAnalysisService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hookEventArray;
- (void)onEventV3:(id)a0 params:(id)a1;
- (id)getAdExtPortraitsWithEvent:(id)a0 groupID:(id)a1 logExtra:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)enabled;

@end
