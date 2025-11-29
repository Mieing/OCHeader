@class AWEPOIInfoModel, NSString, BDPoiItem;

@interface AWEIMPoiItem : NSObject

@property (retain, nonatomic) BDPoiItem *bdPoiItem;
@property (retain, nonatomic) AWEPOIInfoModel *awePoiItem;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } distanceLabelFrame;
@property (copy, nonatomic) NSString *formattedDistance;
@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } gcjCoordinate2D;
@property (readonly, copy, nonatomic) NSString *formattedAddress;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (nonatomic) long long searchDistanceOrder;
@property (nonatomic) long long mapDistanceOrder;
@property (nonatomic) long long distance;

+ (id)defaultDetailAddress:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (id)itemWithGCJ02Coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (id)itemWithBDPoiItem:(id)a0;
+ (id)itemWithAWEPOIInfoModel:(id)a0;

- (id)getContentDict;
- (void).cxx_destruct;

@end
