@class NSString, NSDictionary;

@interface BDCTLocalization : NSObject

@property (retain, nonatomic) NSString *lang;
@property (retain, nonatomic) NSDictionary *dict;

+ (id)localStringWithFlow:(id)a0 string:(id)a1;
+ (id)sharedInstance;

- (id)getPreferredLanguage;
- (void)loadTipDict;
- (id)localString:(id)a0;
- (void)syncLoadDictWithLanguage:(id)a0;
- (void).cxx_destruct;
- (void)setLanguage:(id)a0;
- (id)getLanguage;

@end
