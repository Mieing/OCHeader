@class NSString, NSNumber;

@interface AWEFlashMobFlashTitleConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *stickerTitleHintColor;
@property (nonatomic) BOOL stickerTitleIconShow;
@property (copy, nonatomic) NSString *stickerTitleIconURL;
@property (retain, nonatomic) NSNumber *stickerTitleMarginBottom;
@property (retain, nonatomic) NSNumber *stickerTitleMarginLeft;
@property (retain, nonatomic) NSNumber *stickerTitleMarginRight;
@property (retain, nonatomic) NSNumber *stickerTitleMarginTop;
@property (retain, nonatomic) NSNumber *stickerTitleMaxLine;
@property (copy, nonatomic) NSString *stickerTitleTextColor;
@property (retain, nonatomic) NSNumber *stickerTitleTextSize;
@property (copy, nonatomic) NSString *stickerTitlePlaceholder;
@property (retain, nonatomic) NSNumber *stickerTittleHeight;
@property (retain, nonatomic) NSNumber *stickerTitleIconWidth;
@property (retain, nonatomic) NSNumber *stickerTitleIconHeight;
@property (retain, nonatomic) NSNumber *stickerTitleIconLeft;
@property (retain, nonatomic) NSNumber *stickerTitleIconRight;
@property (copy, nonatomic) NSString *stickerTitleRightIconURL;
@property (retain, nonatomic) NSNumber *stickerTitleRightIconWidth;
@property (retain, nonatomic) NSNumber *stickerTitleRightIconHeight;
@property (retain, nonatomic) NSNumber *stickerTitleRightIconLeft;
@property (retain, nonatomic) NSNumber *stickerTitleRightIconRight;
@property (copy, nonatomic) NSString *stickerTitleTintColor;
@property (nonatomic) BOOL needShowRightIconInEdit;
@property (nonatomic) BOOL stickerTitleCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
