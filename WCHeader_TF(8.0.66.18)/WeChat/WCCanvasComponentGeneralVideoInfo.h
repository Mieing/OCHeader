@class NSString, WCCanvasComponentVideoFloatBarInfo;

@interface WCCanvasComponentGeneralVideoInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) int playerMode;
@property (nonatomic) int displayType;
@property (nonatomic) double displayWidth;
@property (nonatomic) double displayHeight;
@property (retain, nonatomic) NSString *videoMd5;
@property (nonatomic) BOOL forbiddenControlView;
@property (nonatomic) BOOL hideVoiceIcon;
@property (nonatomic) BOOL forbiddenAutoPlay;
@property (nonatomic) BOOL forbiddenPreload;
@property (nonatomic) BOOL forceLandscapeWhenTurnToFullScreen;
@property (retain, nonatomic) WCCanvasComponentVideoFloatBarInfo *floatBarInfo;
@property (nonatomic) BOOL allowVoice;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 withSizeType:(long long)a1 basicWidth:(int)a2 basicRootFontSize:(int)a3 widthRoundingType:(long long)a4 heightRoundingType:(long long)a5;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
