@class NSString;

@interface WCAdSphereCardInfo : NSObject <NSCoding>

@property (nonatomic) unsigned int displayType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *descriptionText;
@property (nonatomic) unsigned int markMaxAlpha;
@property (nonatomic) unsigned int titlePosition;
@property (nonatomic) unsigned long long gestureDelayTime;
@property (retain, nonatomic) NSString *sphereThumbUrl;
@property (retain, nonatomic) NSString *sphereImageUrl;
@property (nonatomic) double sphereImageWidth;
@property (nonatomic) double sphereImageHeight;
@property (retain, nonatomic) NSString *bgColor;
@property (nonatomic) double bgColorAlpha;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
