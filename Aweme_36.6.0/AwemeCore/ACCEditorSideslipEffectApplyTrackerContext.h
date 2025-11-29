@class NSString;

@interface ACCEditorSideslipEffectApplyTrackerContext : NSObject

@property (copy, nonatomic) NSString *scene;
@property (nonatomic) BOOL isAIMemory;
@property (nonatomic) BOOL isAIMemoryTemplate;
@property (copy, nonatomic) NSString *applyType;
@property (copy, nonatomic) NSString *invokeType;
@property (copy, nonatomic) NSString *panelType;
@property (copy, nonatomic) NSString *effectID;
@property (copy, nonatomic) NSString *lastEffectID;
@property (nonatomic) unsigned long long templateType;
@property (nonatomic) unsigned long long lastTemplateType;
@property (copy, nonatomic) NSString *mvAbility;
@property (nonatomic) BOOL isContainCommonRes;
@property (nonatomic) BOOL needPreprocess;
@property (nonatomic) BOOL hitCache;
@property (nonatomic) BOOL isFirstApply;
@property (nonatomic) double firstScrollDuration;
@property (nonatomic) unsigned long long applyCountWhileScroll;
@property (copy, nonatomic) NSString *previewFrameRateStat;

- (void).cxx_destruct;

@end
