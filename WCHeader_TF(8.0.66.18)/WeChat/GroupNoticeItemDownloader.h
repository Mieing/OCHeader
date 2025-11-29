@class NSMutableArray, GroupNoticeItem;
@protocol GroupNoticeItemDownloaderDelegate;

@interface GroupNoticeItemDownloader : NSObject {
    NSMutableArray *m_downloadItemPart;
    NSMutableArray *m_downloadingPartInfo;
}

@property (retain, nonatomic) GroupNoticeItem *item;
@property (weak, nonatomic) id<GroupNoticeItemDownloaderDelegate> delegate;

- (id)initWithItem:(id)a0 delegate:(id)a1;
- (void)start;
- (void)stop;
- (BOOL)isDownloadingData:(id)a0;
- (void)_tryDownloadPart;
- (void).cxx_destruct;

@end
