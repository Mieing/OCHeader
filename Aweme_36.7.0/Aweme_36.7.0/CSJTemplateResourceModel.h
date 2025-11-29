@class NSString;

@interface CSJTemplateResourceModel : NSObject

@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *localUrl;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long level;

- (id)initWithDicitonary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)init;

@end
