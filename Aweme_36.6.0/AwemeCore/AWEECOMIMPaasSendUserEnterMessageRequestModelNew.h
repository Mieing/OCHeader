@class NSString, NSDictionary;

@interface AWEECOMIMPaasSendUserEnterMessageRequestModelNew : NSObject <AWEECOMIMPaasSendUserEnterMessageRequestModelProtocol>

@property (copy, nonatomic) NSString *pigeonShopId;
@property (copy, nonatomic) NSString *conGroupId;
@property (copy, nonatomic) NSString *cardUrlContextParams;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (copy, nonatomic) NSDictionary *extParams;
@property (copy, nonatomic) NSString *bizServiceEntityID;
@property (copy, nonatomic) NSString *pigeonServiceEntityID;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSDictionary *extraExtensionParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)convertToPigeonSendUserEnterMessageRequestModel;
- (void).cxx_destruct;

@end
