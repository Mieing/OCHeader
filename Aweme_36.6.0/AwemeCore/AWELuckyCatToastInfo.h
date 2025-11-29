@class NSString;

@interface AWELuckyCatToastInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enablePresentToast;
@property (copy, nonatomic) NSString *toastInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
