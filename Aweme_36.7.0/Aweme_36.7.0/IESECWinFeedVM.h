@interface IESECWinFeedVM : NSObject

+ (id)objectsForListWithContext:(id)a0 headerResponse:(id)a1 tabs:(id)a2 status:(unsigned long long)a3;
+ (id)sectionControllerWithObject:(id)a0 context:(id)a1;
+ (id)getHeaderObjectWithSectionModel:(id)a0 headerResponse:(id)a1 context:(id)a2;
+ (id)getHeaderObjectWithMixFullItem:(id)a0 headerResponse:(id)a1 context:(id)a2 headerHybrid:(BOOL)a3 sectionStyle:(id)a4 splitConfig:(unsigned long long)a5;
+ (id)getObjectWithItem:(id)a0 context:(id)a1 index:(long long)a2 tab:(id)a3;
+ (void)lynxCardappendExtraInfo:(id)a0 index:(long long)a1 context:(id)a2;
+ (BOOL)isNewRankIndexStart:(id)a0;
+ (id)mapperItemKey:(id)a0 itemType:(long long)a1;
+ (id)mapperKey:(id)a0;
+ (id)sectionClassMap;
+ (id)getObjectArrWithTabDataStatus:(unsigned long long)a0 tab:(id)a1 context:(id)a2;

@end
