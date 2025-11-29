@class NSMutableDictionary;

@interface AWEEcomSearchSchemaUtil : NSObject

@property (retain, nonatomic) NSMutableDictionary *enterFromToSearchConfigDict;

+ (id)shareInstance;

- (id)getSearchConfig:(id)a0;
- (void)saveSearchSchemaParams:(id)a0;
- (void).cxx_destruct;

@end
