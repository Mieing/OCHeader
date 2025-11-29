@class NSString, NSArray;

@interface ALPStringLocalizationInfo : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSArray *pluralParams;

- (id)initWithKey:(id)a0 locale:(id)a1;
- (id)initWithKey:(id)a0 locale:(id)a1 pluralParams:(id)a2;
- (void).cxx_destruct;

@end
