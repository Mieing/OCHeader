@class AWEIMEmoticonThemeModel, NSArray, NSString, AWEIMEmoticonInfoModel;

@interface AWEIMAImojiManager : NSObject <AWEUserMessage, AWEIMStrategyConfigChangeMessage>

@property (class, readonly, nonatomic) AWEIMAImojiManager *sharedInstance;

@property (retain, nonatomic) NSArray *styleList;
@property (retain, nonatomic) AWEIMEmoticonInfoModel *styleInfoModel;
@property (retain, nonatomic) AWEIMEmoticonThemeModel *styleThemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resolveStyleList;
+ (id)reformatStyleModelArray:(id)a0;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)strategyConfigUpdate;
- (id)artModelWithArtID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
