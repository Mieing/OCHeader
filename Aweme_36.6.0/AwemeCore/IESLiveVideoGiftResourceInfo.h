@class NSString, NSArray, NSDictionary, NSURL, IESLiveVideoGiftIcons;

@interface IESLiveVideoGiftResourceInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long contentMode;
@property (nonatomic) long long resourceVersion;
@property (copy, nonatomic) NSString *resourceName;
@property (copy, nonatomic) NSString *vibrateResourceName;
@property (copy, nonatomic) NSArray *alphaFrameArray;
@property (copy, nonatomic) NSArray *rgbFrameArray;
@property (nonatomic) double frames;
@property (nonatomic) double videoOriginHeight;
@property (nonatomic) double videoOriginWidth;
@property (nonatomic) double videoHeight;
@property (nonatomic) double videoWidth;
@property (nonatomic) BOOL hasAudio;
@property (copy, nonatomic) NSDictionary *foregroundDictionary;
@property (copy, nonatomic) NSDictionary *backgroundDictionary;
@property (retain, nonatomic) IESLiveVideoGiftIcons *icons;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } alphaFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rgbFrame;
@property (copy, nonatomic) NSString *resourceFilePath;
@property (copy, nonatomic) NSURL *vibrateResourceFileURL;
@property (copy, nonatomic) NSString *vibrateResourceFilePath;
@property (copy, nonatomic) NSURL *resourceFileURL;
@property (retain, nonatomic) NSDictionary *masksInfo;
@property (retain, nonatomic) NSDictionary *masksDictionary;
@property (retain, nonatomic) NSDictionary *resources;
@property (copy, nonatomic) NSDictionary *foreground;
@property (copy, nonatomic) NSDictionary *background;
@property (copy, nonatomic) NSArray *originLayers;
@property (copy, nonatomic) NSArray *layersOrder;
@property (copy, nonatomic) NSDictionary *layerDictionary;
@property (nonatomic) BOOL blendingEnable;
@property (nonatomic) BOOL maskContainerEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)originLayersJSONTransformer;
+ (id)contentModeJSONTransformer;
+ (id)resourceVersionJSONTransformer;
+ (id)iconsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)multiVideoResourceAvailable;
- (BOOL)checkResourceAvailable:(id)a0;
- (void)live_replenish;
- (BOOL)resourceAvailable;
- (BOOL)vibrateAvailable;
- (void).cxx_destruct;

@end
