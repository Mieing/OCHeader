@class NSString;

@interface WBWebpageObject : WBBaseMediaObject

@property (retain, nonatomic) NSString *webpageUrl;

- (void)storeToDictionary:(id)a0;
- (void).cxx_destruct;
- (id)validate;
- (void)loadFromDictionary:(id)a0;

@end
