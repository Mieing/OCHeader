@class NSDecimalNumber;

@interface ACCTemplateStickerGeometryModel : ACCImageAlbumItemDraftResourceRestorableModel

@property (retain, nonatomic) NSDecimalNumber *x;
@property (retain, nonatomic) NSDecimalNumber *y;
@property (retain, nonatomic) NSDecimalNumber *xRatio;
@property (retain, nonatomic) NSDecimalNumber *yRatio;
@property (retain, nonatomic) NSDecimalNumber *width;
@property (retain, nonatomic) NSDecimalNumber *height;
@property (retain, nonatomic) NSDecimalNumber *rotation;
@property (retain, nonatomic) NSDecimalNumber *scale;
@property (nonatomic) BOOL preferredRatio;

- (void).cxx_destruct;

@end
