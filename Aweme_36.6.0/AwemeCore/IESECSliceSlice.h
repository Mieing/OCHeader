@class NSString, IESECSliceAction, NSDictionary, IESECSliceVerifyConfig, IESECSliceTemplateSlice, IESECSliceSliceConfig;

@interface IESECSliceSlice : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *innerSliceType;
@property (nonatomic) unsigned long long sliceType;
@property (copy, nonatomic) NSString *sliceID;
@property (retain, nonatomic) IESECSliceAction *showAction;
@property (retain, nonatomic) IESECSliceAction *asyncDataAction;
@property (retain, nonatomic) IESECSliceAction *takeoutLynxListenerAction;
@property (retain, nonatomic) IESECSliceTemplateSlice *templateSlice;
@property (copy, nonatomic) NSDictionary *style;
@property (copy, nonatomic) NSDictionary *sliceData;
@property (nonatomic) BOOL skipDataBind;
@property (copy, nonatomic) IESECSliceSliceConfig *config;
@property (retain, nonatomic) IESECSliceVerifyConfig *verify;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
