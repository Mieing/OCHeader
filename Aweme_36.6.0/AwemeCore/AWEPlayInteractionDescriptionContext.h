@class AWEPlayInteractionDescriptionTrack, NSString, AWEPlayInteractionContext, AWEAwemeModel, AWEPlayInteractionDescriptionModifyElement, NSDictionary, AWEPlayInteractionDescriptionElementViewModel, AWEPlayInteractionDescriptionInfoModel;

@interface AWEPlayInteractionDescriptionContext : NSObject

@property (nonatomic) unsigned long long parserType;
@property (weak, nonatomic) AWEPlayInteractionDescriptionModifyElement *descriptionElement;
@property (weak, nonatomic) AWEPlayInteractionContext *interactionContext;
@property (weak, nonatomic) AWEPlayInteractionDescriptionElementViewModel *elementViewModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEPlayInteractionDescriptionTrack *tracker;
@property (retain, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEPlayInteractionDescriptionInfoModel *infoModel;
@property (nonatomic) BOOL isForDescriptionPanel;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) BOOL appear;
@property (nonatomic) BOOL needSetupTextAction;
@property (nonatomic) BOOL alwaysMakeExtraViewNoStyle;
@property (nonatomic) BOOL alwaysEnterRelatedRecommend;

+ (BOOL)enablePerformanceOpt;
+ (long long)feedDescInteractionUnifiedType;
+ (BOOL)isValidSceneWithModel:(id)a0 referString:(id)a1;

- (BOOL)isValidScene;
- (BOOL)forceEnterRelatedRecommend;
- (BOOL)forceMakeExtraViewNoStyle;
- (void).cxx_destruct;
- (id)init;

@end
