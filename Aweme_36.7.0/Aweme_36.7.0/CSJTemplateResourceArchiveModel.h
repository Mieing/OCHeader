@class NSString, NSDictionary;

@interface CSJTemplateResourceArchiveModel : NSObject

@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *localUrl;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *map;

- (id)initWithDicitonary:(id)a0;
- (BOOL)valid;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)init;

@end
