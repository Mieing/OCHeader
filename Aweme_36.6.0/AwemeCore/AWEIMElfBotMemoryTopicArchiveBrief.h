@class NSString, AWEIMElfBotMemoryContext;

@interface AWEIMElfBotMemoryTopicArchiveBrief : AWEIMElfBotMemoryBaseBrief <AWEIMElfBotModelComparatorContextProtocol>

@property (retain, nonatomic) AWEIMElfBotMemoryContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
