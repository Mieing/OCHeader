@class NSDictionary, NSMutableDictionary;

@interface AWEECEntranceModel : NSObject

@property (retain, nonatomic) NSDictionary *oldEntranceInfo;
@property (retain, nonatomic) NSMutableDictionary *bcmInfo;

- (id)btd_stringValueForKey:(id)a0;
- (void)btd_setObject:(id)a0 forKey:(id)a1;
- (id)btd_objectForKey:(id)a0 default:(id)a1;
- (id)btd_stringValueForKey:(id)a0 default:(id)a1;
- (id)initWithEntranceInfo:(id)a0 bcmInfo:(id)a1;
- (id)mergeResult;
- (void).cxx_destruct;

@end
