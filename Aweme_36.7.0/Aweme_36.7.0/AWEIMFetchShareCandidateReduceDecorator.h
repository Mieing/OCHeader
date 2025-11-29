@interface AWEIMFetchShareCandidateReduceDecorator : NSObject

+ (BOOL)__canInsertGroup:(id)a0 dataSource:(id)a1;
+ (BOOL)__canInsertThirdRecommendShareModel:(id)a0 dataSource:(id)a1;
+ (id /* block */)insertShareModelDecoratorWithConfig:(id)a0;
+ (Class)candidateWithType:(id)a0;
+ (id)candidateItemWithType:(id)a0 shareModel:(id)a1;
+ (id)__insertDataSourceWithType:(id)a0;
+ (BOOL)insertToArray:(id)a0 with:(id)a1 atIndex:(long long)a2 limit:(long long)a3 replaceOld:(BOOL)a4 dataSource:(id)a5;
+ (BOOL)__isSocialGroupWithShareModel:(id)a0;
+ (id /* block */)decorator;

@end
