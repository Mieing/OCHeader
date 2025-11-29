@interface AWEIMFetchShareGroupDecorator : NSObject

+ (BOOL)__isHighestPriorityTargetAtIndex:(unsigned long long)a0 ofTranspondList:(id)a1 inCandidateModels:(id)a2;
+ (BOOL)__isSocialGroupWithShareModel:(id)a0;
+ (id)__targetInsertIndexs;
+ (id)__candidateGroupList;
+ (BOOL)__checkNeedInsertIntimateGroupWithShareModel:(id)a0 targetInsertIndex:(long long)a1 transpondList:(id)a2 candidateModels:(id)a3;
+ (BOOL)__checkCurrentCandidateModelMeetTheRequirements:(id)a0 dataSource:(id)a1;
+ (BOOL)__insertCurrentModel:(id)a0 toList:(id)a1 targetInsertIndex:(long long)a2;
+ (id /* block */)insertGroupDecorator;
+ (id)__socialGroupsInShareModelList:(id)a0;
+ (BOOL)__checkNeedInsertNormalGroupWithShareModel:(id)a0;
+ (BOOL)__enableIntimateGroupInsertionOptimize;

@end
