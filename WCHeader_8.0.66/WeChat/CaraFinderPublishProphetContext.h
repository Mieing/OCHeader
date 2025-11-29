@class NSString, WCFinderPostSessionModel;

@interface CaraFinderPublishProphetContext : CaraNativeFinderPublishProphetContext <CaraNativeFinderPublishProphetContextBase>

@property (retain, nonatomic) WCFinderPostSessionModel *postSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)zidl;
- (int)videoDurationMs;
- (int)videoEmojiNum;
- (int)videoTextNum;
- (BOOL)videoMusicIdValid;
- (int)videoMusicIndex;
- (BOOL)isSearchMusic;
- (int)longDescLength;
- (int)shortDescLength;
- (BOOL)hasExtReading;
- (BOOL)postFromDraft;
- (BOOL)hasInvalidWatermark;
- (BOOL)enterBackgroundOnPostPage;
- (float)originBitrate;
- (int)originWidth;
- (float)originAudioBitrate;
- (float)originVideoFrameRate;
- (int)editTimeMs;
- (float)fileSize;
- (BOOL)useVideoTemplateInfo;
- (int)videoPlayDuration;
- (BOOL)newSelectOnPostPage;
- (BOOL)hasOriginalStatementEntry;
- (BOOL)hasClickLongDescTextView;
- (BOOL)hasClickShortDescTextView;
- (BOOL)hasCleanUpLongDesc;
- (BOOL)hasCleanUpShortDesc;
- (int)videoSourceType;
- (int)patMusicType;
- (void).cxx_destruct;

@end
