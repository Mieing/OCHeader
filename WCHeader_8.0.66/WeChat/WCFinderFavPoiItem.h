@class NSString, WCFinderJumperPoiParams, FinderLocation, FinderJumpInfo_LbsLifeCardStyle;

@interface WCFinderFavPoiItem : NSObject

@property (retain, nonatomic) FinderJumpInfo_LbsLifeCardStyle *style;
@property (retain, nonatomic) NSString *paramsJson;
@property (retain, nonatomic) WCFinderJumperPoiParams *poiJumpParams;
@property (retain, nonatomic) FinderLocation *location;

- (id)initWithFavPOIItem:(id)a0;
- (void).cxx_destruct;

@end
