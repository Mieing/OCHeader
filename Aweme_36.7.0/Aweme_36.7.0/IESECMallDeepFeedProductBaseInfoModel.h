@class NSString, NSNumber;

@interface IESECMallDeepFeedProductBaseInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *promotionID;
@property (retain, nonatomic) NSNumber *promotionSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
