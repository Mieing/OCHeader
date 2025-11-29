@class NSString, NSNumber, IESECMallListKitBffDataModel;

@interface AWEECMallSubListModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSNumber *timestamp;
@property (copy, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) IESECMallListKitBffDataModel *bffData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hybridListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
