@class NSString, RecommendReasonInteractDataV2;

@interface RecommendReasonData : GPBMessage

@property (nonatomic) BOOL addressBookPermission;
@property (nonatomic) BOOL hasAddressBookPermission;
@property (nonatomic) BOOL gpsPermission;
@property (nonatomic) BOOL hasGpsPermission;
@property (retain, nonatomic) RecommendReasonInteractDataV2 *interactData;
@property (nonatomic) BOOL hasInteractData;
@property (copy, nonatomic) NSString *followCardClientTrackInfo;
@property (nonatomic) BOOL hasFollowCardClientTrackInfo;

+ (id)descriptor;

@end
