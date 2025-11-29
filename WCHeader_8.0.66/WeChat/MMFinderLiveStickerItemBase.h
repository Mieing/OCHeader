@class MMLiveStorageCleanupPinningToken, NSString, UIImage, NSObject;

@interface MMFinderLiveStickerItemBase : NSObject <NSCopying>

@property (retain, nonatomic) NSString *instanceId;
@property (nonatomic) BOOL imageArchived;
@property (retain, nonatomic) MMLiveStorageCleanupPinningToken *archiveImagePinningToken;
@property (readonly, nonatomic) NSString *submissionId;
@property (readonly, nonatomic) unsigned long long stickerType;
@property (readonly, nonatomic) BOOL isStub;
@property (retain, nonatomic) UIImage *stickerImage;
@property (readonly, nonatomic) NSObject *stickerAccessibilityDescriptor;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) struct CGSize { double width; double height; } nativeSize;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (nonatomic) struct CGSize { double width; double height; } normalizedSize;
@property (nonatomic) struct CGPoint { double x; double y; } normalizedCenter;
@property (nonatomic) struct CGPoint { double x; double y; } normalizedAnchorPoint;
@property (nonatomic) struct CGAffineTransformComponents { struct CGSize { double width; double height; } scale; double horizontalShear; double rotation; struct CGVector { double dx; double dy; } translation; } normalizedTransformComponents;
@property (nonatomic) long long actionSceneOrientation;

- (id)initWithInstanceId:(id)a0;
- (id)init;
- (BOOL)isContentEqualTo:(id)a0;
- (id)createReviewSubmissionItem;
- (void)archiveImage;
- (void)loadImageFromArchive;
- (id)copyAsUniqueInstance;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)imageArchiveFilename;
- (id)imageArchivePath;
- (void).cxx_destruct;

@end
