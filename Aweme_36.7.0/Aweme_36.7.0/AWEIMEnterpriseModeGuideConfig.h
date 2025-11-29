@class NSString, AWEIMEnterpriseModeGuideFrequencyConfig;

@interface AWEIMEnterpriseModeGuideConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *hintImgUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *confirmBtnText;
@property (copy, nonatomic) NSString *cancelBtnText;
@property (retain, nonatomic) AWEIMEnterpriseModeGuideFrequencyConfig *freqConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
