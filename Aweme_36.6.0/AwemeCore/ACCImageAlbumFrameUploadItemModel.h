@class NSString;

@interface ACCImageAlbumFrameUploadItemModel : ACCImageAlbumExportItemModel

@property (nonatomic) unsigned long long type;
@property (nonatomic) long long idx;
@property (nonatomic) BOOL isCropped;
@property (copy, nonatomic) NSString *URI;
@property (copy, nonatomic) NSString *publishImageUri;
@property (nonatomic) struct CGPoint { double x; double y; } cropTopLeft;
@property (nonatomic) struct CGPoint { double x; double y; } cropTopRight;
@property (nonatomic) struct CGPoint { double x; double y; } cropBottomLeft;
@property (nonatomic) struct CGPoint { double x; double y; } cropBottomRight;
@property (nonatomic) double rotate;

- (id)typeString;
- (void).cxx_destruct;

@end
