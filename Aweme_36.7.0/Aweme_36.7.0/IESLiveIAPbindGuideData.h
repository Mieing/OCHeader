@class NSNumber, NSString, NSDictionary;

@interface IESLiveIAPbindGuideData : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isShowGuide;
@property (nonatomic) BOOL isSelectGuideCheck;
@property (retain, nonatomic) NSNumber *discountAmount;
@property (nonatomic) BOOL isUsedIAP;
@property (copy, nonatomic) NSString *guideTipContent;
@property (copy, nonatomic) NSString *guideButtonContent;
@property (copy, nonatomic) NSString *cJExtra;
@property (nonatomic) BOOL isShowCannelPayGuide;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
