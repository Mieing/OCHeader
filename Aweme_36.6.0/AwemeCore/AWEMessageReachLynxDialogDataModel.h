@class NSString;

@interface AWEMessageReachLynxDialogDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSString *lynxControllerUrl;
@property (nonatomic) long long lynxControllerTimeOut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isEqualDataModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
