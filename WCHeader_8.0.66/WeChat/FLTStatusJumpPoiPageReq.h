@class NSString;

@interface FLTStatusJumpPoiPageReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *poiId;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (retain, nonatomic) NSString *poiName;
@property (retain, nonatomic) NSString *city;

+ (void)initialize;

@end
