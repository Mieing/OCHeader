@class NSString, UIColor, FinderLiveGestureInfo;

@interface MMFinderLiveGestureInfo : NSObject

@property (retain, nonatomic) FinderLiveGestureInfo *gestureInfo;
@property (retain, nonatomic) NSString *gestureId;
@property (nonatomic) double maxRotationAngleInRadius;
@property (nonatomic) double renderScale;
@property (retain, nonatomic) UIColor *overlayTextStrokeColor;
@property (nonatomic) struct CGPoint { double x; double y; } overlayTextRelativeCenter;
@property (retain, nonatomic) NSString *resourceBasePath;
@property (retain, nonatomic) NSString *iconBasePath;
@property (retain, nonatomic) NSString *colorIconPath;
@property (retain, nonatomic) NSString *darkModeMonochromeIconPath;
@property (retain, nonatomic) NSString *lightModeMonochromeIconPath;
@property (retain, nonatomic) NSString *hintIconBasePath;
@property (retain, nonatomic) NSString *hintIconPath;
@property (retain, nonatomic) NSString *anchorResourceBasePath;
@property (retain, nonatomic) NSString *luaScriptPath;
@property (retain, nonatomic) NSString *renderingResourceBasePath;
@property (retain, nonatomic) NSString *primaryPagPath;
@property (retain, nonatomic) NSString *giftingPagPath;
@property (retain, nonatomic) NSString *primaryWeVisionRenderLuaPath;
@property (retain, nonatomic) NSString *giftingWeVisionRenderLuaPath;
@property (retain, nonatomic) NSString *soundEffectPath;
@property (retain, nonatomic) NSString *downloadTempPath;
@property (retain, nonatomic) id resourceDownloader;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *hintText;
@property (readonly, nonatomic) NSString *giftingHintText;
@property (readonly, nonatomic) double minRenderSize;
@property (readonly, nonatomic) unsigned long long renderMode;
@property (readonly, nonatomic) unsigned long long overlayTextFontSize;
@property (readonly, nonatomic) double overlayTextAppearTime;
@property (readonly, nonatomic) double overlayTextDisappearTime;
@property (readonly, nonatomic) unsigned long long minSdkVersion;
@property (readonly, nonatomic) unsigned long long maxSdkVersion;
@property (readonly, nonatomic) BOOL luaSupported;
@property (readonly, nonatomic) unsigned int displayOrder;
@property (readonly, nonatomic) FinderLiveGestureInfo *stub;

+ (void)clearResourcesForGestureWithId:(unsigned int)a0;
+ (void)clearResourcesForGestureWithIdStr:(id)a0;
+ (id)gestureInfoWithModel:(id)a0;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;

- (BOOL)resourcesDifferentFromUpdateDirective:(id)a0;
- (void)loadResourcesWithCompletionBlock:(id /* block */)a0;
- (BOOL)validateResources;
- (void)clearResources;
- (id)initWithGestureInfo:(id)a0;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
