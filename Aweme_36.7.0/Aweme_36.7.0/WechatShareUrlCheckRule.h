@class NSString, NSArray;

@interface WechatShareUrlCheckRule : NSObject

@property (copy, nonatomic) NSString *host;
@property (retain, nonatomic) NSArray *mustQueryKeys;

- (id)initWithParamDictionary:(id)a0;
- (id)genDictionaryToSave;
- (void).cxx_destruct;

@end
