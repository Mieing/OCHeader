@class NSString, NSData, FinderClientStatus, POIInfo;

@interface WCFinderPOIStreamRequestParams : NSObject

@property (nonatomic) int tabId;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) FinderClientStatus *status;
@property (retain, nonatomic) NSString *poiClassifyId;
@property (nonatomic) unsigned long long fromObjectId;
@property (nonatomic) int poiFromType;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) POIInfo *poiInfo;
@property (nonatomic) unsigned int filterType;
@property (nonatomic) BOOL isPrefetch;
@property (retain, nonatomic) NSString *jumpInfoToPoiStreamBypass;

- (void).cxx_destruct;

@end
