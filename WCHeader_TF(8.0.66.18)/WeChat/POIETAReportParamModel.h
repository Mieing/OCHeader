@class NSString;

@interface POIETAReportParamModel : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *chatName;
@property (nonatomic) unsigned int operUserType;
@property (nonatomic) unsigned int chatType;
@property (nonatomic) unsigned int poiDistrict;
@property (nonatomic) unsigned int poiAttrType;
@property (retain, nonatomic) NSString *poiDurationCarMin;
@property (retain, nonatomic) NSString *poiDurationWalkMin;
@property (retain, nonatomic) NSString *poiDistanceM;

+ (void)initialize;

@end
