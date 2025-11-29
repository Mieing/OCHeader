@class NSError, NSString, IESECMallShopMomentResponse;

@interface IESECMallShopMomentListModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECMallShopMomentResponse *response;
@property (retain, nonatomic) IESECMallShopMomentResponse *firstScreenResponse;
@property (nonatomic) BOOL isFetch;
@property (nonatomic) BOOL isFirstScreen;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long status;
@property (nonatomic) BOOL isCacheData;
@property (nonatomic) BOOL fromFE;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
