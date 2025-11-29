@class NSString, WeAppData;

@interface BizFinderLiveResp_BizFinderLiveInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bizusername;
@property (retain, nonatomic) NSString *finderFeedExportId;
@property (nonatomic) unsigned int refreshInterval;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int liveScene;
@property (retain, nonatomic) NSString *cover;
@property (nonatomic) BOOL useWeapp;
@property (retain, nonatomic) WeAppData *weappData;
@property (retain, nonatomic) NSString *finderusername;

+ (void)initialize;

@end
