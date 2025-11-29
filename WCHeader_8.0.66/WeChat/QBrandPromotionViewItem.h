@class NSString, QBrandPromotionContext, QBrandPromotionItem, InnerQMarker;

@interface QBrandPromotionViewItem : NSObject <QBrandPromotionImageOwner>

@property (weak, nonatomic) QBrandPromotionContext *brandPromotionContext;
@property (retain, nonatomic) InnerQMarker *marker;
@property (readonly, nonatomic) QBrandPromotionItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBrandPromotionItem:(id)a0 context:(id)a1;
- (void)removeMarker;
- (id)mapView;
- (id)imageURLString;
- (id)imageURLKey;
- (struct CGSize { double x0; double x1; })imageSize;
- (double)connerRadius;
- (BOOL)isNight;
- (void)brandPromotionImageDownloader:(id)a0 success:(id)a1;
- (void)createMarkerWithImage:(id)a0;
- (void)brandPromotionImageDownloader:(id)a0 failure:(id)a1;
- (void).cxx_destruct;

@end
