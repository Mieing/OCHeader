@class NSString, NSDictionary, AWEAwemeModel, NSIndexPath;

@interface AWEFeedSpeciesBottomViewModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (nonatomic) BOOL isClickToEnter;
@property (copy, nonatomic) NSString *reactID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *params;

- (id)enterMethod;
- (id)getCommonTrackDic;
- (void)trackForShowAction;
- (void)trackForJumpAction;
- (void)trackForCloseAction;
- (id)getShotBtnTitletext;
- (id)getTipContent;
- (BOOL)isInGrootScene;
- (void)jumpToRecordSpecies;
- (id)getSpeciesInfo;
- (id)getTipHintString;
- (id)defaultHintString;
- (id)getSchemaForClickRecord;
- (id)getCommonJumpParamsDic;
- (id)getShootJumpParamsDic;
- (id)getBrowseJumpParamsDic;
- (id)__enterMethod;
- (id)paramsForShowOrCloseOrBrowseActionTrack;
- (id)paramsForShootActionTrack;
- (id)getGrootOptimizeHomeSchema;
- (id)getTransformedEnterFrom:(id)a0;
- (id)getGrootHomeSchema;
- (void).cxx_destruct;
- (long long)getActionType;

@end
