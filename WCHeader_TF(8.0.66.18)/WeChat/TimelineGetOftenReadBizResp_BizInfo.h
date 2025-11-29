@class NSString, WeAppData, TimelineGetOftenReadBizResp_FinderInfo;

@interface TimelineGetOftenReadBizResp_BizInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bizusername;
@property (retain, nonatomic) NSString *logoUrl;
@property (nonatomic) unsigned int weight;
@property (retain, nonatomic) NSString *finderFeedExportId;
@property (nonatomic) unsigned int refreshInterval;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int liveScene;
@property (nonatomic) BOOL useWeapp;
@property (retain, nonatomic) WeAppData *weappData;
@property (nonatomic) long long finderGreenDotTimeStamp;
@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) TimelineGetOftenReadBizResp_FinderInfo *finderInfo;
@property (retain, nonatomic) NSString *finderExportId;
@property (nonatomic) unsigned int lastetNewPublishTimestamp;

+ (void)initialize;

@end
