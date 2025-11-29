@interface WCLabsStorage : NSObject

+ (id)getLabsAppItemDicPath;
+ (BOOL)saveLabsAppItemDic:(id)a0;
+ (id)loadLabsAppItemDic;
+ (id)getLabsCommonInfoPath;
+ (BOOL)saveLabsCommonInfo:(id)a0;
+ (id)loadLabsCommonInfo;
+ (id)getRedDotFromClientIdListPath;
+ (BOOL)saveRedDotFromClientIdList:(id)a0;
+ (id)loadRedDotFromClientIdList;
+ (id)getClearedRedDotLabsAppidAryPath;
+ (BOOL)saveClearedRedDotLabsAppidAry:(id)a0;
+ (id)loadClearedRedDotLabsAppidAry;
+ (id)getClearedRedDotLabsAppidAryPathInAppEntracnce;
+ (BOOL)saveClearedRedDotLabsAppidAryInAppEntracnce:(id)a0;
+ (id)loadClearedRedDotLabsAppidAryInAppEntracnce;

@end
