@class NSNumber, NSDictionary, NSString;

@interface IESECLiveGoodsReservationModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *reservationStartTime;
@property (retain, nonatomic) NSNumber *reservationEndTime;
@property (retain, nonatomic) NSNumber *serverTime;
@property (nonatomic) BOOL hasReservation;
@property (retain, nonatomic) NSDictionary *buttonLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)inReservation;
- (id)getCompaignSubType;
- (void).cxx_destruct;

@end
