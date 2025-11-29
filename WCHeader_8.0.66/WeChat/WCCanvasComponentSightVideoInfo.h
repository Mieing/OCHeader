@class NSString, WCCanvasComponentVideoFloatBarInfo;

@interface WCCanvasComponentSightVideoInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *sightVideoUrl;
@property (retain, nonatomic) NSString *sightThumbUrl;
@property (nonatomic) int displayType;
@property (nonatomic) double sightDisplayWidth;
@property (nonatomic) double sightDisplayHeight;
@property (retain, nonatomic) NSString *sightVideoMd5;
@property (nonatomic) BOOL useNewSightPlayer;
@property (nonatomic) BOOL forbiddenControlView;
@property (nonatomic) BOOL closePlayerStateCheckWhenSetThumbContentMode;
@property (nonatomic) BOOL allowVoice;
@property (nonatomic) BOOL forceLandscapeWhenTurnToFullScreen;
@property (retain, nonatomic) WCCanvasComponentVideoFloatBarInfo *floatBarInfo;
@property (retain, nonatomic) NSString *streamVideoUrl;
@property (retain, nonatomic) NSString *jumpText;
@property (retain, nonatomic) NSString *jumpTextColor;
@property (retain, nonatomic) NSString *separatorColor;
@property (retain, nonatomic) NSString *canvasId;
@property (retain, nonatomic) NSString *canvasExt;
@property (nonatomic) int canvasNoStore;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
