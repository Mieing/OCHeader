@class NSString;

@interface PTYKVStore : NSObject

@property (readonly, copy, nonatomic) NSString *business;
@property (readonly, copy, nonatomic) NSString *aid;

- (id)getValuesForKeys:(id)a0;
- (id)getKVData;
- (BOOL)setKVValue:(id)a0 forKey:(id)a1;
- (id)initWithBusiness:(id)a0 aid:(id)a1;
- (BOOL)setKVData:(id)a0;
- (BOOL)containsKey:(id)a0;
- (id)getValueForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)removeKeys:(id)a0;
- (BOOL)append:(id)a0;

@end
