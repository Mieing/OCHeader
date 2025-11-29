@class NSString, CdnComVideoProcessInfo, NSMutableSet, CdnProgressInfo, NSMutableDictionary;
@protocol WCPlayerDownloadTaskInfoDelegate;

@interface WCPlayerDownloadTaskInfo : NSObject

@property (retain, nonatomic) NSString *nsIdentifier;
@property (retain, nonatomic) NSMutableSet *allTask;
@property (retain, nonatomic) CdnProgressInfo *progressInfo;
@property (retain, nonatomic) CdnComVideoProcessInfo *m3u8ProgressInfo;
@property (retain, nonatomic) CdnComVideoProcessInfo *moovProgressInfo;
@property (weak, nonatomic) id<WCPlayerDownloadTaskInfoDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *dicTaskBlock;
@property (readonly, nonatomic) int count;
@property (nonatomic) BOOL bTaskStart;
@property (nonatomic) long long createTime;

- (id)initWithTaskId:(unsigned int)a0 identifier:(id)a1;
- (void)reuseDownloadTaskWithTaskId:(unsigned int)a0 block:(id)a1;
- (void)removeTaskWithId:(unsigned int)a0;
- (void)onMoovReady:(id)a0;
- (void)onM3u8Ready:(id)a0;
- (void)onDownloadProgress:(id)a0;
- (void)onDownloadComplete:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
