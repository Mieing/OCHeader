@class NSString, WCCanvasComponentTextAreaInfo, WCCanvasComponentButtonInfo, WCCanvasComponentVideoFloatBarInfo;

@interface WCCanvasComponentStreamVideoInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *streamVideoUrl;
@property (retain, nonatomic) NSString *streamVideoMd5;
@property (retain, nonatomic) NSString *previewImageUrl;
@property (retain, nonatomic) WCCanvasComponentTextAreaInfo *textOnVideo;
@property (retain, nonatomic) WCCanvasComponentButtonInfo *buttonOnVideo;
@property (nonatomic) int displayType;
@property (nonatomic) double streamDisplayWidth;
@property (nonatomic) double streamDisplayHeight;
@property (nonatomic) BOOL useNewStreamPlayer;
@property (nonatomic) BOOL forbiddenLoopPlay;
@property (nonatomic) BOOL alwaysAutoPlay;
@property (nonatomic) BOOL allowVoice;
@property (nonatomic) BOOL forceLandscapeWhenTurnToFullScreen;
@property (retain, nonatomic) WCCanvasComponentVideoFloatBarInfo *floatBarInfo;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
