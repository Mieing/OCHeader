@class WCStoryMediaItem, NSString, WCMediaItem, MMTextStateMediaItem, UrlInfo, NSArray, WCFinderFeedMediaWrap;

@interface CdnSnsTaskInfo : NSObject {
    unsigned int m_uiIPDnsType;
}

@property (nonatomic) int m_nRetCode;
@property (nonatomic) unsigned long long m_ui64StartTime;
@property (nonatomic) unsigned int m_uiFileType;
@property (nonatomic) unsigned long long m_uiFileSize;
@property (retain, nonatomic) NSString *m_nsCdnStatInfo;
@property (retain, nonatomic) WCMediaItem *m_oWCMediaItem;
@property (retain, nonatomic) WCStoryMediaItem *m_oStoryMediaItem;
@property (retain, nonatomic) WCFinderFeedMediaWrap *m_oFinderMediaItem;
@property (retain, nonatomic) MMTextStateMediaItem *m_oTextStateMediaMediaItem;
@property (nonatomic) long long downloadType;
@property (retain, nonatomic) NSString *m_nsClientID;
@property (retain, nonatomic) NSString *m_nsSavePath;
@property (retain, nonatomic) UrlInfo *m_urlInfo;
@property (nonatomic) long long m_maxRetryCount;
@property (nonatomic) unsigned int m_uiConcurrentCount;
@property (nonatomic) unsigned int m_eImgRequestType;
@property (nonatomic) unsigned int m_eImgResponseType;
@property (nonatomic) BOOL m_bNeedNotify;
@property (nonatomic) BOOL m_isDCIP;
@property (nonatomic) unsigned int m_dcIpDnsType;
@property (nonatomic) unsigned int m_ocIpDnsType;
@property (retain, nonatomic) NSArray *m_dcIplist;
@property (retain, nonatomic) NSArray *m_ocIplist;
@property (nonatomic) unsigned int m_uiDnsCostTime;
@property (nonatomic) int m_cdnMediaType;
@property (nonatomic) BOOL isBatchDownloadThumb;
@property (retain, nonatomic) NSString *tid;
@property (nonatomic) unsigned int feedMediaAllCount;
@property (retain, nonatomic) NSArray *batchMediaInfo;
@property (nonatomic) BOOL finishBatchTask;
@property (nonatomic) BOOL isCoverTask;
@property (nonatomic) long long finderDownloadImageType;
@property (nonatomic) BOOL wasSuspended;
@property (nonatomic) BOOL sufferedFromBadNetwork;

- (id)init;
- (id)GetStatInfo;
- (void).cxx_destruct;

@end
