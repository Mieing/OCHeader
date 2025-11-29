@class NSString, NSArray, NSMutableDictionary;

@interface BrandLemmaEntry : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSArray *contents;
@property (retain, nonatomic) NSMutableDictionary *typeToContent;

+ (id)modelPropertyBlacklistForConfigTag:(id)a0;
+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (id)getLemmaForType:(unsigned int)a0 locale:(id)a1;
- (void).cxx_destruct;

@end
