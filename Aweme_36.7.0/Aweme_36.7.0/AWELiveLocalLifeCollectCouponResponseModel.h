@class NSNumber, NSString, NSDictionary;

@interface AWELiveLocalLifeCollectCouponResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSNumber *resultCode;
@property (copy, nonatomic) NSString *resultMsg;
@property (copy, nonatomic) NSDictionary *collectPopWindow;
@property (copy, nonatomic) NSDictionary *extraLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
