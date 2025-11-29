@class BDPNovelInsertChapterPolicy, NSString, NSDictionary, BDPNovelInsertPagePolicy;

@interface BDPNovelInsertPageCondition : NSObject

@property (copy, nonatomic) NSString *conditionId;
@property (retain, nonatomic) BDPNovelInsertChapterPolicy *chapterPolicy;
@property (retain, nonatomic) BDPNovelInsertPagePolicy *pagePolicy;
@property (copy, nonatomic) NSString *policyType;
@property (copy, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSDictionary *viewParam;
@property (nonatomic) long long priority;
@property (nonatomic) double paddingTop;
@property (nonatomic) double paddingRight;
@property (nonatomic) double paddingBottom;
@property (nonatomic) double paddingLeft;
@property (retain, nonatomic) NSDictionary *extra;

+ (id)modelContainerPropertyGenericClass;
+ (id)checkIfHasErrorDic:(id)a0;

- (id)adUnitID;
- (id)lynxName;
- (BOOL)satisfiedForChapterPageEnd:(long long)a0 meta:(id)a1 readDirection:(long long)a2;
- (BOOL)satisfiedForChapterEnd:(id)a0;
- (BOOL)satisfiedForDynamicPage:(long long)a0 readDirection:(long long)a1;
- (id)checkIfHasError;
- (long long)startContentIndex;
- (long long)adPageGap;
- (void).cxx_destruct;
- (id)init;

@end
