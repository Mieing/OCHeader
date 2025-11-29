@class POIInfo, NSString;

@interface WCFinderPOIParamsModel : NSObject <NSCopying>

@property (retain, nonatomic) POIInfo *poiInfo;
@property (copy, nonatomic) NSString *poiClassifyId;
@property (copy, nonatomic) NSString *chatname;
@property (copy, nonatomic) NSString *reportID;
@property (nonatomic) int poiFromType;
@property (nonatomic) int entryScene;
@property (nonatomic) unsigned long long fromObjectId;
@property (nonatomic) BOOL hideExactLocation;
@property (nonatomic) int tabID;
@property (nonatomic) unsigned int filterType;
@property (nonatomic) int fromScene;
@property (nonatomic) BOOL isPrefetch;
@property (retain, nonatomic) NSString *jumpInfoToPoiStreamBypass;

- (id)initWithSnsPOIRelatedStreamWithPOIInfo:(id)a0 poiClassifyId:(id)a1 chatname:(id)a2 reportID:(id)a3 entryScene:(int)a4;
- (id)initWithFinderPOIRelatedWithPOIInfo:(id)a0 poiClassifyId:(id)a1 fromObjectId:(unsigned long long)a2 reportID:(id)a3 entryScene:(int)a4 jumpInfoToPoiStreamBypass:(id)a5;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
