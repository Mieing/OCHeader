@class NSString, NSMutableDictionary, NSDictionary;

@interface PersonalTransParamsInput : NSObject

@property (nonatomic) int liveCurrentVbitrate;
@property (nonatomic) NSMutableDictionary *mHistoryDownloadSpeedMap;
@property (nonatomic) NSString *liveCurrentNeptuneName;
@property (nonatomic) int connectTypeValue;
@property (nonatomic) id rtt;
@property (nonatomic) NSDictionary *nqeInfo;

@end
