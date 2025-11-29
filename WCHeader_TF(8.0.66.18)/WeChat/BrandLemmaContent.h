@class NSDictionary;

@interface BrandLemmaContent : NSObject

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSDictionary *i18n;

- (id)getLemmaForLocale:(id)a0;
- (void).cxx_destruct;

@end
