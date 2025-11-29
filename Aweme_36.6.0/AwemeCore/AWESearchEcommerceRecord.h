@class NSString, AWEDoubleColumnSearchMerchandiseModel;

@interface AWESearchEcommerceRecord : NSObject

@property (nonatomic) long long count;
@property (nonatomic) long long timestamp;
@property (copy, nonatomic) NSString *buttonType;
@property (copy, nonatomic) NSString *postion;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;

+ (id)clickRecord:(long long)a0;

- (id)pitayaItemData;
- (id)toDictionaryValue;
- (BOOL)isEqualRecord:(id)a0;
- (void).cxx_destruct;
- (id)itemInfo;
- (id)searchID;

@end
