@class NSDictionary, AWEIMFriendInfoDataModel, NSString;

@interface AWEIMOnlineContactContext : NSObject

@property (copy, nonatomic) NSDictionary *bizModelMap;
@property (retain, nonatomic) AWEIMFriendInfoDataModel *currentLoginUserWithVirtualAvatar;
@property (nonatomic) BOOL enableBuildPromot;
@property (nonatomic) BOOL enableBuildCloseFriendGuide;
@property (nonatomic) BOOL enableBuildWatchLive;
@property (nonatomic) BOOL enableBuildSelfHidden;
@property (nonatomic) BOOL enableBuildFlashBack;
@property (nonatomic) BOOL usedYearMemoriesCache;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *serverDict;
@property (copy, nonatomic) NSDictionary *infos;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (copy, nonatomic) NSString *originUserID;
@property (nonatomic) BOOL isDiskCache;
@property (copy, nonatomic) id /* block */ hiddenConditionsChangedBlock;

+ (BOOL)enableCloseFriendsMoment;
+ (id)clientVersionNumber;

- (void)preCheckContext;
- (BOOL)enableSkii;
- (id)generateRequestParamsExceptFromStrategyConfigManager;
- (id)generateRequestParamsFromStrategyConfigManager:(id)a0 otherParams:(id)a1;
- (id)p_registerLocalBizData;
- (id)flashBackConfigForPhotoLibrary;
- (id)p_formatBusinessData;
- (id)fetchParsedBizModelWithType:(unsigned long long)a0;
- (void)afterCheckContext;
- (id)generateRequestParams;
- (id)asyncGenerateRequestParams;
- (BOOL)enableStory25;
- (BOOL)checkEnableBuildDataWithBizType:(unsigned long long)a0;
- (id)getBusinessDataWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
