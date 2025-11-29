@class LOTComposition, NSString, NSArray, IESLiveVideoGiftMetalConfiguration, UIImage, NSDictionary;

@interface AWEUGPendantUIInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *indentify;
@property (nonatomic) unsigned long long resourceType;
@property (nonatomic) long long pendantType;
@property (copy, nonatomic) NSString *staticExpandedURL;
@property (copy, nonatomic) NSString *staticFoldedURL;
@property (copy, nonatomic) NSString *lottiFileURL;
@property (copy, nonatomic) NSString *compressedLottieFileMD5;
@property (copy, nonatomic) NSArray *expandedPendantFrameList;
@property (copy, nonatomic) NSArray *foldedPendantFrameList;
@property (copy, nonatomic) NSString *expandedLottieName;
@property (copy, nonatomic) NSString *foldedLottieName;
@property (copy, nonatomic) NSString *rightFoldedLottieName;
@property (copy, nonatomic) NSString *enterLottieName;
@property (copy, nonatomic) NSString *taskCompletedLottieName;
@property (copy, nonatomic) NSString *lottieBundleName;
@property (copy, nonatomic) NSString *taskCompleteLottieFileURL;
@property (copy, nonatomic) NSString *taskCompleteLottieFileMD5;
@property (retain, nonatomic) LOTComposition *pendantExpendedLottie;
@property (retain, nonatomic) LOTComposition *pendantFoldedLottie;
@property (retain, nonatomic) LOTComposition *pendantRightFoldedLottie;
@property (retain, nonatomic) LOTComposition *enterLottie;
@property (retain, nonatomic) LOTComposition *taskCompletedLottie;
@property (copy, nonatomic) NSString *expandedAlphaVideoName;
@property (copy, nonatomic) NSString *foldedAlphaVideoName;
@property (retain, nonatomic) IESLiveVideoGiftMetalConfiguration *pendantExpandedAlphaVideo;
@property (retain, nonatomic) IESLiveVideoGiftMetalConfiguration *pendantFoldedAlphaVideo;
@property (retain, nonatomic) UIImage *expandedImage;
@property (retain, nonatomic) UIImage *foldedImage;
@property (nonatomic) BOOL resourceReady;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentUIFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } expandContentUIFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } foldContentUIFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rightsideFoldContentUIFrame;
@property (copy, nonatomic) NSString *activityId;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
