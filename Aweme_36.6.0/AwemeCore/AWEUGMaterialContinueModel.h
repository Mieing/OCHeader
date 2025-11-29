@class NSString, NSDictionary;

@interface AWEUGMaterialContinueModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *materialTag;
@property (copy, nonatomic) NSDictionary *continueStrategy;
@property (copy, nonatomic) NSDictionary *popupInfo;
@property (copy, nonatomic) NSDictionary *lynxInfo;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) long long statusCode;
@property (nonatomic) long long timeoutLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
