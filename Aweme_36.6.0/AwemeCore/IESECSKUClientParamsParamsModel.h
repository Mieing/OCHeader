@class NSArray, NSDictionary, NSString, NSNumber;

@interface IESECSKUClientParamsParamsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *defaultSpecId;
@property (nonatomic) long long defaultCount;
@property (nonatomic) BOOL scrollToInstallment;
@property (retain, nonatomic) NSNumber *douInstallmentTerm;
@property (copy, nonatomic) NSDictionary *poiInfo;
@property (nonatomic) BOOL popOnWindow;
@property (copy, nonatomic) NSString *skuSessionId;
@property (copy, nonatomic) NSString *maskBackgroundColor;
@property (retain, nonatomic) NSNumber *maskAlpha;
@property (nonatomic) BOOL disableServerDefaultSelect;
@property (nonatomic) long long addCartToastType;
@property (nonatomic) BOOL forceYataSku;
@property (nonatomic) long long heightPercent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)maskColor;

@end
