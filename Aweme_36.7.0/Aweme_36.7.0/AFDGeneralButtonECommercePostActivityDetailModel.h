@class NSString, AFDGeneralButtonECommercePostActivityPushInfo, AFDGeneralButtonECommercePostActivityPopupInfo;

@interface AFDGeneralButtonECommercePostActivityDetailModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL shouldHideButton;
@property (nonatomic) long long afterwardActionType;
@property (retain, nonatomic) AFDGeneralButtonECommercePostActivityPushInfo *pushInfo;
@property (retain, nonatomic) AFDGeneralButtonECommercePostActivityPopupInfo *popupInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pushInfoJSONTransformer;
+ (id)popupInfoJSONTransformer;
+ (id)afterwardActionTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
