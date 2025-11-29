@class NSArray, NSString, AWEIMElfBotMemoryContext;

@interface AWEIMElfBotMemoryTopic : AWEIMERawDictionaryModel <AWEIMElfBotModelComparatorVersionProtocol, AWEIMElfBotModelComparatorContextProtocol>

@property (nonatomic) long long majorVersion;
@property (nonatomic) long long minorVersion;
@property (retain, nonatomic) AWEIMElfBotMemoryContext *context;
@property (copy, nonatomic) NSArray *topics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
