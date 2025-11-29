@class NSString, NSMutableDictionary;

@interface LLDitoPerformancePageDetail : NSObject

@property (copy, nonatomic) NSString *type;
@property (nonatomic) unsigned long long index;
@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) NSMutableDictionary *detailInfo;

- (id)dictionaryFromModel;
- (void).cxx_destruct;
- (id)init;

@end
