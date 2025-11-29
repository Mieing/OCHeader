@class NSString, NSDictionary, BDPLivePlayerSizeModel, NSNumber;

@interface BDPLivePlayerModel : BDPBasePluginModel

@property (copy, nonatomic) NSString *src;
@property (nonatomic) BOOL muted;
@property (nonatomic) BOOL autoplay;
@property (copy, nonatomic) NSString *objectFit;
@property (copy, nonatomic) NSString *orientation;
@property (retain, nonatomic) BDPLivePlayerSizeModel *size;
@property (nonatomic) BOOL hide;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSDictionary *allHTTPHeaderFields;
@property (nonatomic) BOOL autoPauseIfNavigate;
@property (nonatomic) BOOL autoPauseIfOpenNative;
@property (nonatomic) long long pageID;
@property (copy, nonatomic) NSString *componentID;
@property (retain, nonatomic) NSDictionary *signature;
@property (copy, nonatomic) NSString *shareMode;
@property (nonatomic) BOOL isLivePreview;
@property (retain, nonatomic) NSNumber *fullscreenDirection;
@property (nonatomic) BOOL showCastingButton;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (struct CGSize { double x0; double x1; })getTargetSize;
- (void).cxx_destruct;

@end
