@class NSDictionary;

@interface AWEEcomSearchRawBaseRecord : AWESearchEcommerceRecord

@property (copy, nonatomic) NSDictionary *params;

+ (id)rawRecord:(id)a0 model:(id)a1;

- (id)pitayaItemData;
- (id)toDictionaryValue;
- (void).cxx_destruct;
- (id)itemInfo;
- (id)searchID;

@end
