@class AWEVideoCoverEvaluateNormalSuggestModel, NSString, NSArray, NSDictionary, AWEVideoCoverEvaluateOriginCoverModel, AWEVideoCoverEvaluateResultDescModel;

@interface AWEVideoCoverEvaluateModel : AWEBaseApiModel <MTLJSONSerializing>

@property (nonatomic) long long showType;
@property (nonatomic) long long coverEvaluateType;
@property (nonatomic) long long cardStrategy;
@property (retain, nonatomic) AWEVideoCoverEvaluateOriginCoverModel *evaluateCover;
@property (retain, nonatomic) AWEVideoCoverEvaluateNormalSuggestModel *suggestCoverList;
@property (retain, nonatomic) AWEVideoCoverEvaluateResultDescModel *resultDesc;
@property (retain, nonatomic) NSString *resultTitle;
@property (retain, nonatomic) NSArray *lowSuggestList;
@property (retain, nonatomic) NSArray *problemList;
@property (retain, nonatomic) NSDictionary *modelScore;
@property (retain, nonatomic) NSString *suggestContent;
@property (retain, nonatomic) NSString *evaluateConclusion;
@property (retain, nonatomic) NSString *aiContent;
@property (retain, nonatomic) NSArray *aiCoverList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lowSuggestListJSONTransformer;
+ (id)aiCoverListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
