@class NewTipsConfigCenter;

@interface NewTipsUtils : NSObject

@property (retain, nonatomic) NewTipsConfigCenter *configsCenter;

- (id)init;
- (id)GetRootPathOfNewTips;
- (BOOL)isBlank:(id)a0;
- (BOOL)shouldShowTipsInfo:(id)a0;
- (BOOL)isTimeValidate:(id)a0;
- (BOOL)isTipsInfoValidate:(id)a0;
- (BOOL)isRegionValidate:(id)a0;
- (BOOL)isLanguageValidate:(id)a0;
- (id)GetPathOfNewTipsBusinessInfos;
- (id)getXLabNewTipsConfig;
- (void)SaveNewTipsBusinessInfos:(id)a0;
- (id)getTipsConfigWithTipsId:(unsigned int)a0;
- (id)getAllConfigs;
- (id)LoadNewTipsBusinessInfos;
- (id)generateTipsInfoWithXml:(id)a0;
- (BOOL)canReceiveXmlWithTipsInfo:(id)a0;
- (void).cxx_destruct;

@end
