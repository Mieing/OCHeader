@class AWEIMGroupActionCheckToastInfo, AWEIMGroupActionCheckTextInfo, AWEIMGroupActionCheckFilterPopup;

@interface AWEIMGroupActionCheckPromptInfo : AWEBaseApiModel

@property (nonatomic) unsigned long long promptType;
@property (retain, nonatomic) AWEIMGroupActionCheckToastInfo *toastInfo;
@property (retain, nonatomic) AWEIMGroupActionCheckFilterPopup *filterPopup;
@property (retain, nonatomic) AWEIMGroupActionCheckTextInfo *textInfo;

+ (id)textInfoJSONTransformer;
+ (id)toastInfoJSONTransformer;
+ (id)normalPopupJSONTransformer;
+ (id)filterPopupJSONTransformer;
+ (id)promptTypeJSONTransformer;
+ (id)blockReasonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
