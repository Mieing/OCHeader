@class NSString, EditVideoBGMSelectedMusicInfo, WCLocationInfo, NSMutableArray;

@interface WCStoryPublishReportObj : NSObject

@property (retain, nonatomic) NSString *publishEventId;
@property (nonatomic) unsigned long long enterScene;
@property (nonatomic) unsigned long long enterTime;
@property (nonatomic) unsigned long long startEditTime;
@property (nonatomic) unsigned long long videoDuration;
@property (nonatomic) unsigned long long videoSource;
@property (nonatomic) unsigned int emoticonWidgetCount;
@property (nonatomic) unsigned int textWidgetCount;
@property (retain, nonatomic) WCLocationInfo *locationInfo;
@property (retain, nonatomic) NSMutableArray *actionTraceArray;
@property (retain, nonatomic) EditVideoBGMSelectedMusicInfo *musicInfo;
@property (nonatomic) BOOL isClickSearchMusic;
@property (nonatomic) BOOL isPublishToTimeLine;
@property (nonatomic) unsigned int publishVideoType;
@property (nonatomic) unsigned int photoCount;
@property (nonatomic) BOOL isShowLyric;
@property (nonatomic) BOOL isAddTextIntro;
@property (nonatomic) unsigned int addTextIntroWordCount;
@property (nonatomic) unsigned int addEmojToTextIntroCount;
@property (copy, nonatomic) NSString *photoLengthWidthSacles;
@property (nonatomic) unsigned int videoCompoundTime;
@property (nonatomic) unsigned int isPortrailVideo;
@property (nonatomic) BOOL hasRecordVideo;
@property (nonatomic) BOOL hasEnterAllbum;

- (void)enterWithScene:(unsigned long long)a0;
- (id)realPoiInfoStr;
- (void)reportDoPublish;
- (void)reportQuitPublish;
- (void)doActionTraceWithType:(unsigned long long)a0;
- (id)arrayToJSON:(id)a0;
- (unsigned long long)saveVideoCount;
- (void).cxx_destruct;

@end
