@class NSString, NSArray, AWEOCRPortraitLandscapeInfo;

@interface AWEOCRCardItemConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long cardType;
@property (retain, nonatomic) AWEOCRPortraitLandscapeInfo *portraitConfig;
@property (retain, nonatomic) AWEOCRPortraitLandscapeInfo *landscapeConfig;
@property (copy, nonatomic) NSString *guideTitle;
@property (retain, nonatomic) NSArray *guideTexts;
@property (copy, nonatomic) NSString *guideButton;
@property (copy, nonatomic) NSString *scanHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)portraitConfigJSONTransformer;
+ (id)landscapeConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
