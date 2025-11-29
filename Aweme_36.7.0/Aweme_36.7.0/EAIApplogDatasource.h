@class EAIEventProcessor, NSMutableDictionary, NSString;

@interface EAIApplogDatasource : NSObject <EAIDatasource, EAIApplogReceiver>

@property (retain, nonatomic) EAIEventProcessor *processor;
@property (retain, nonatomic) NSMutableDictionary *values;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
