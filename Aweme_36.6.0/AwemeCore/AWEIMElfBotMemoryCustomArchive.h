@class NSDictionary, NSString;

@interface AWEIMElfBotMemoryCustomArchive : AWEIMERawDictionaryModel <AWEIMElfBotModelComparatorVersionProtocol>

@property (nonatomic) long long majorVersion;
@property (nonatomic) long long minorVersion;
@property (copy, nonatomic) NSDictionary *archives;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
