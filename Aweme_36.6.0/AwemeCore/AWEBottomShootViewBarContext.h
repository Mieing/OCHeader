@class UINavigationController, NSString, NSDictionary, AWEMediaTemplateModel, NSArray, AWEAweMVTemplateModel, NSNumber;
@protocol AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWEBottomShootViewBarContext : NSObject <AWEBottomShootViewBarContextProtocol>

@property (retain, nonatomic) id<AWEAwemeDetailBottomBarCommonContextProtocol> commonCtx;
@property (copy, nonatomic) NSDictionary *detailBottomInfoDict;
@property (copy, nonatomic) id /* block */ getEffectModelBlock;
@property (copy, nonatomic) id /* block */ getVideoRankBlock;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (copy, nonatomic) NSString *mvID;
@property (retain, nonatomic) AWEAweMVTemplateModel *cutSameTemplate;
@property (retain, nonatomic) NSNumber *cutSameStatusCode;
@property (retain, nonatomic) AWEMediaTemplateModel *mediaTemplate;
@property (retain, nonatomic) NSNumber *mediaStatusCode;
@property (retain, nonatomic) NSNumber *mvType;
@property (retain, nonatomic) NSNumber *mediaProvider;
@property (retain, nonatomic) NSNumber *diaryType;
@property (copy, nonatomic) NSDictionary *diaryTaskInfo;
@property (copy, nonatomic) NSString *propId;
@property (copy, nonatomic) NSString *propSearchParams;
@property (nonatomic) BOOL isPropAsTemplate;
@property (copy, nonatomic) NSString *buttonType;
@property (copy, nonatomic) NSDictionary *liteNewStickerTaskInfo;
@property (copy, nonatomic) NSArray *effects;
@property (copy, nonatomic) NSArray *bindEffects;
@property (copy, nonatomic) NSString *activityVideoType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
