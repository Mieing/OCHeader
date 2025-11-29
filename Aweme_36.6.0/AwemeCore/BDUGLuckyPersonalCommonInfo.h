@class NSArray, NSDictionary, BDUGLuckyTabInfoList, BDUGLuckyColdPopup, BDUGLuckySettingsPopup;
@protocol BDUGLuckySettingsPopup;

@interface BDUGLuckyPersonalCommonInfo : BDUGLuckyBDModel

@property (retain, nonatomic) BDUGLuckySettingsPopup *popup;
@property (copy, nonatomic) NSArray<BDUGLuckySettingsPopup> *pollingPopupList;
@property (retain, nonatomic) BDUGLuckyColdPopup *coldPopup;
@property (retain, nonatomic) BDUGLuckyTabInfoList *tabInfo;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
