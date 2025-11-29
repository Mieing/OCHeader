@class WCFinderDataItem, NSMutableDictionary, NSString;

@interface WCFinderFeedAudioHelper : NSObject <WCPlayerDownloaderExt, WCFinderVideoDownLoadMgrExt>

@property (retain, nonatomic) WCFinderDataItem *bindDataItem;
@property (retain, nonatomic) NSMutableDictionary *parseDic;
@property (nonatomic) int commentScene;
@property (copy, nonatomic) id /* block */ sucBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)videoHasDownloaded:(id)a0 commentScene:(int)a1;
+ (id)genFeedOutputPathBy:(id)a0 commentScene:(int)a1;
+ (BOOL)videoHasBeFollowed:(id)a0;

- (BOOL)enableUseFeedDirectly:(id)a0;
- (BOOL)enableUseFeedDirectlyByDataItem:(id)a0;
- (id)initWithCommentScene:(int)a0;
- (id)genDownloadMediaInfo;
- (void)dealloc;
- (void)resetDataItem;
- (void)parseTargetAudioDataItem:(id)a0 sucBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)a0;
- (void)extractAudioTrackFromOutputPath:(id)a0;
- (void)OnCdnDownloadError:(id)a0;
- (void).cxx_destruct;

@end
