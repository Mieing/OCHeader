@class NSString, NSMutableDictionary;

@interface iAPCache : NSObject <PBCoding> {
    NSMutableDictionary *dicProductToPrepare;
}

@property (retain, nonatomic) NSMutableDictionary *dicBillNos;
@property (retain, nonatomic) NSMutableDictionary *dicProductPrice;
@property (retain, nonatomic) NSMutableDictionary *dicProductLocale;
@property (retain, nonatomic) NSMutableDictionary *dicUnVerifyReceipt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_dicBillNos;
+ (void)PBArrayAdd_dicProductPrice;
+ (void)PBArrayAdd_dicProductLocale;
+ (void)PBArrayAdd_dicUnVerifyReceipt;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)initProductDictionary;
- (void)initUnVerifyTransaction;
- (void)addProduct:(id)a0;
- (id)productForProductID:(id)a0;
- (id)priceForProductID:(id)a0;
- (id)localeForProductID:(id)a0;
- (id)UnVerifyTransactionForProductID:(id)a0;
- (void)addUnverifyTransaction:(id)a0;
- (void)removeUnverifyTransactionForProductID:(id)a0;
- (void).cxx_destruct;

@end
