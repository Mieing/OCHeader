@class NSDictionary, NSString, CSPChunkRequestManager;

@interface AWEEcomSearchEngineConfiguration : NSObject <AWEEcomSearchEngineConfigurationProtocol>

@property (nonatomic) unsigned long long searchType;
@property (retain, nonatomic) CSPChunkRequestManager *chunkRequestManager;
@property (nonatomic) BOOL enablePreRequest;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textSearchConfiguration;
+ (id)imageSearchConfiguration;
+ (id)defaultConfiguration;

- (id)chunkProcessorWithMapping;
- (id)chunkRelationRules;
- (void).cxx_destruct;

@end
