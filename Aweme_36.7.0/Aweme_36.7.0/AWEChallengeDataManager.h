@interface AWEChallengeDataManager : NSObject

+ (id)appTheme;
+ (void)requestChallengeItemWithID:(id)a0 isCommerce:(BOOL)a1 completion:(id /* block */)a2;
+ (void)requestChallengeItemsWithIDArray:(id)a0 completion:(id /* block */)a1;
+ (void)requestTaskItemWithID:(id)a0 completion:(id /* block */)a1;
+ (void)requestChallengeItemWithName:(id)a0 isCommerce:(BOOL)a1 completion:(id /* block */)a2;
+ (id)getExpectedSizeInfo;
+ (void)requestAwemeListWithID:(id)a0 isCommerce:(BOOL)a1 pullType:(id)a2 cursor:(id)a3 count:(id)a4 enterFrom:(id)a5 type:(unsigned long long)a6 sourceType:(unsigned long long)a7 extraParams:(id)a8 completion:(id /* block */)a9;
+ (void)requestAwemeListWithHashtagName:(id)a0 isCommerce:(BOOL)a1 pullType:(id)a2 cursor:(id)a3 count:(id)a4 enterFrom:(id)a5 type:(unsigned long long)a6 sourceType:(unsigned long long)a7 extraParams:(id)a8 completion:(id /* block */)a9;
+ (id)addMACAddressIfNeeded:(id)a0;
+ (id)getChallengeRelatedItemsCommonRequestParamsWithEnterFrom:(id)a0 queryType:(unsigned long long)a1 sourceType:(unsigned long long)a2;
+ (void)requestChallengeRelatedItemsWithID:(id)a0 isCommerce:(BOOL)a1 previewID:(id)a2 enterFrom:(id)a3 type:(unsigned long long)a4 params:(id)a5 logHost:(id)a6 completion:(id /* block */)a7;
+ (void)requestChallengeRelatedItemsWithName:(id)a0 isCommerce:(BOOL)a1 enterFrom:(id)a2 type:(unsigned long long)a3 params:(id)a4 logHost:(id)a5 completion:(id /* block */)a6;

@end
