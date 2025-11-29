@class NSArray;

@interface AWEIMEmoticonRelyListDataSource : NSObject

@property (retain, nonatomic) NSArray *sectionModels;
@property (nonatomic) unsigned long long initialIndex;

- (id)initWithMessage:(id)a0 initialKey:(id)a1;
- (void)p_formatDataWithMessage:(id)a0 initialKey:(id)a1;
- (void).cxx_destruct;

@end
