@class AWEIMGroupActionCheckToastInfo, AWEIMCodeGenGroupActionCheckCreateRulePopUpModel, AWEIMGroupActionCheckFilterPopup, AWEIMGroupActionCheckNormalPopup, AWEIMGroupActionCheckTextInfo;

@interface AWEIMGroupActionCheckPromptInfo : AWEBaseApiModel

@property (nonatomic) unsigned long long promptType;
@property (retain, nonatomic) AWEIMGroupActionCheckToastInfo *toastInfo;
@property (retain, nonatomic) AWEIMGroupActionCheckNormalPopup *normalPopup;
@property (retain, nonatomic) AWEIMGroupActionCheckFilterPopup *filterPopup;
@property (nonatomic) unsigned long long blockReason;
@property (retain, nonatomic) AWEIMGroupActionCheckTextInfo *textInfo;
@property (retain, nonatomic) AWEIMCodeGenGroupActionCheckCreateRulePopUpModel *createRulePopup;

+ (id)textInfoJSONTransformer;
+ (id)toastInfoJSONTransformer;
+ (id)normalPopupJSONTransformer;
+ (id)filterPopupJSONTransformer;
+ (id)promptTypeJSONTransformer;
+ (id)blockReasonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
