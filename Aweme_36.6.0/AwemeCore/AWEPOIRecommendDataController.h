@class NSArray, NSString, NSDictionary, CLLocation;

@interface AWEPOIRecommendDataController : NSObject

@property (nonatomic) BOOL isRequestOnAir;
@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) BOOL locationIs02;
@property (copy, nonatomic) NSArray *locationInfos;
@property (copy, nonatomic) NSArray *selectedPOIs;
@property (copy, nonatomic) NSArray *topics;
@property (copy, nonatomic) NSArray *challengeIDs;
@property (copy, nonatomic) NSString *microAppID;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *creationID;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long publishContentType;
@property (copy, nonatomic) NSDictionary *autoOpenSpuParams;
@property (copy, nonatomic) NSString *lifeAnchorParams;
@property (copy, nonatomic) NSString *lifeAnchorParamPersist;

- (id)requestParameter;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
