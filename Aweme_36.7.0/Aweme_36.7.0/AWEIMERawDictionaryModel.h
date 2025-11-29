@class NSDictionary;

@interface AWEIMERawDictionaryModel : NSObject

@property (retain, nonatomic) NSDictionary *rawData;

+ (id)modelPropertyBlacklist;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (BOOL)modelCustomTransformToDictionary:(id)a0;
- (void).cxx_destruct;

@end
