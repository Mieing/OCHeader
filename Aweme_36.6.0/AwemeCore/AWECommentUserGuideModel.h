@class NSString, AWECommentUserGuideTipsModel, AWECommentUserGuideAlertModel;

@interface AWECommentUserGuideModel : AWEBaseApiModel

@property (retain, nonatomic) AWECommentUserGuideTipsModel *tipsModel;
@property (retain, nonatomic) AWECommentUserGuideAlertModel *alertModel;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long freqDay;
@property (nonatomic) long long freqNum;
@property (copy, nonatomic) NSString *storageKey;
@property (copy, nonatomic) id /* block */ jumpBlock;

+ (id)alertModelJSONTransformer;
+ (id)tipsModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
