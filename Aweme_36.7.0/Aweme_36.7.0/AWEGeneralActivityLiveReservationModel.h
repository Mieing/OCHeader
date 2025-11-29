@class NSString;

@interface AWEGeneralActivityLiveReservationModel : AWEUserModel <IGListDiffable>

@property (copy, nonatomic) NSString *dateID;
@property (copy, nonatomic) NSString *startTime;
@property (nonatomic) BOOL isReserve;

+ (id)avatarThumbJSONTransformer;
+ (id)roomIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end
