@class NSString, NSNumber, NSDictionary;

@interface IESGCPGamecpDataConnectionParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *unifiedGameId;
@property (copy, nonatomic) NSString *promoterId;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *actionString;
@property (copy, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSNumber *isAds;
@property (copy, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSNumber *isPromotionGame;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
