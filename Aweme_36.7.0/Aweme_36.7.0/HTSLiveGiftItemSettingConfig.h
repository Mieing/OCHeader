@class NSArray;
@protocol HTSLiveTemplateProviderAdapter;

@interface HTSLiveGiftItemSettingConfig : NSObject

@property (nonatomic) BOOL curatedUseDefaultBuffCard;
@property (nonatomic) BOOL storedBuffCardFix;
@property (copy, nonatomic) NSArray *defaultSelectCardTabs;
@property (nonatomic) BOOL useLynxBuffCard;
@property (nonatomic) BOOL enableAllPageTypesSelectForceCard;
@property (nonatomic) BOOL enableSelectedPreload;
@property (nonatomic) BOOL enablePreloadUseCEPRule;
@property (nonatomic) BOOL enableRenderOpt;
@property (retain, nonatomic) id<HTSLiveTemplateProviderAdapter> templateProvider;
@property (nonatomic) BOOL enableOptSeriesOperationDisplay;

- (void).cxx_destruct;
- (id)init;

@end
