@class AWEMessageReachLynxDialogDataModel, NSString, NSDictionary, AWEMessageReachNativeDialogDataModel;

@interface AWEMessageReachDialogDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *businessId;
@property (copy, nonatomic) NSDictionary *businessData;
@property (nonatomic) long long showTimeout;
@property (retain, nonatomic) AWEMessageReachNativeDialogDataModel *nativeDataModel;
@property (retain, nonatomic) AWEMessageReachLynxDialogDataModel *lynxDataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nativeDataModelJSONTransformer;
+ (id)lynxDataModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isEqualDataModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
