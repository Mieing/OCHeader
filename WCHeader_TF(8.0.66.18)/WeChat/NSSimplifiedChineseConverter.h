@class NSDictionary;

@interface NSSimplifiedChineseConverter : NSObject

@property (retain, nonatomic) NSDictionary *t2sMap;
@property (retain, nonatomic) NSDictionary *s2tMap;

+ (id)sharedInstance;

- (id)simplify:(id)a0;
- (void)loadMap;
- (id)traditional:(id)a0;
- (id)getTraditionalChineseDic;
- (void).cxx_destruct;

@end
