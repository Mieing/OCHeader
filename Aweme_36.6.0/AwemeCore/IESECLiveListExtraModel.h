@class NSString, NSDictionary, NSNumber;

@interface IESECLiveListExtraModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long roomType;
@property (nonatomic) long long instantRoomType;
@property (nonatomic) long long hourBuyShopMatchStatus;
@property (copy, nonatomic) NSString *hourBuyShopID;
@property (retain, nonatomic) NSDictionary *eventParams;
@property (nonatomic) BOOL userChooseStore;
@property (retain, nonatomic) NSNumber *storeID;
@property (retain, nonatomic) NSNumber *virtualRoomID;
@property (retain, nonatomic) NSString *addressID;
@property (retain, nonatomic) NSNumber *addressType;
@property (retain, nonatomic) NSString *addressStrategyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
