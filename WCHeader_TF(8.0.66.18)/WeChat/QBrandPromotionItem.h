@class NSString;

@interface QBrandPromotionItem : NSObject <QGridItem> {
    struct CLLocationCoordinate2D { double latitude; double longitude; } _coord;
    struct { double x; double y; } _mapPoint;
}

@property (copy, nonatomic) NSString *project_id;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) int min_level;
@property (nonatomic) int max_level;
@property (nonatomic) int marker_width;
@property (nonatomic) int marker_height;
@property (nonatomic) int marker_anchor_x;
@property (nonatomic) int marker_anchor_y;
@property (nonatomic) long long offline_time;
@property (nonatomic) long long online_time;
@property (copy, nonatomic) NSString *day_pic_url;
@property (copy, nonatomic) NSString *night_pic_url;
@property (nonatomic) int rank;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSON:(id)a0;
- (BOOL)isValid:(int)a0 limitSizeMagnification:(int)a1 limitMinLevel:(int)a2 LimitMaxLevel:(int)a3 currentZoomLevel:(int)a4;
- (BOOL)isEqual:(id)a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })coord;
- (struct { double x0; double x1; })mapPoint;
- (void).cxx_destruct;

@end
