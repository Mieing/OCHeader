@class WCDataItem, NSString, NSMutableDictionary, NSData, NSMutableSet, NSMutableArray, NSRecursiveLock;

@interface WCSetting : NSObject <NSCoding> {
    int groupTransferRetryCount;
    NSRecursiveLock *ignoreNtfLock;
    NSRecursiveLock *wsTimestampLock;
}

@property (retain, nonatomic) NSString *groupListMD5;
@property (retain, nonatomic) NSString *groupRecommendListMD5;
@property (nonatomic) long long postPrivacy;
@property (retain, nonatomic) NSMutableArray *lastPostGroupIDs;
@property (retain, nonatomic) NSMutableArray *lastPostVisibleLabelName;
@property (retain, nonatomic) NSMutableArray *lastPostInVisibleLabelName;
@property (nonatomic) unsigned int lastShareOptions;
@property (retain, nonatomic) WCDataItem *lastDataItem;
@property (retain, nonatomic) WCDataItem *redDotDataItem;
@property (nonatomic) int unReadCount;
@property (nonatomic) unsigned int timelineShowFlag;
@property (nonatomic) int postMentionLimit;
@property (nonatomic) int postTogetherLimit;
@property (nonatomic) int pasteLengthLimit;
@property (nonatomic) int tiger2022PostStatus;
@property (nonatomic) int tiger2022SourceStatus;
@property (nonatomic) BOOL hasShowPlainTextTip;
@property (nonatomic) int firstPageCount;
@property (nonatomic) int nextPageCount;
@property (nonatomic) int educationTipShowCount;
@property (retain, nonatomic) NSData *dataSession;
@property (nonatomic) int groupTransferCount;
@property (retain, nonatomic) NSMutableArray *arrNeedTransferGroup;
@property (retain, nonatomic) NSMutableArray *arrLabelName;
@property (retain, nonatomic) NSData *adDetailSession;
@property (nonatomic) int snsRedEnvelopesFullScreenTipShowCount;
@property (nonatomic) BOOL enableBrowseSnsRedEnvelopes;
@property (nonatomic) int switchOpCountForSnsRedEnvelopes;
@property (nonatomic) int postFeedCountForSnsRedEnvelopes;
@property (retain, nonatomic) NSString *maxPostFeedCountId;
@property (nonatomic) int goldenCameraTipShowCount;
@property (retain, nonatomic) NSString *goldenCameraTipId;
@property (retain, nonatomic) NSString *fullScreenShowTipId;
@property (nonatomic) BOOL hasShowSnsPrivacyFullScreenGuide;
@property (nonatomic) BOOL hasShowSnsCommitDragTip;
@property (retain, nonatomic) NSMutableDictionary *dicIgnoreNotificationFeedId;
@property (retain, nonatomic) NSMutableDictionary *wsFoldTimestamp;
@property (retain, nonatomic) NSMutableSet *isNotFirstTimeUser;
@property (nonatomic) BOOL hasShowHotVideoTip;
@property (nonatomic) BOOL hasShowHotImageTip;
@property (nonatomic) unsigned int timelineFoldSectionSize;
@property (retain, nonatomic) NSData *wsSessionBufData;
@property (nonatomic) unsigned int realWsVersion;
@property (retain, nonatomic) NSString *emoticonBoardPid;
@property (nonatomic) long long curRedDotPriorityComparisons;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)shouldTransferGroup;
- (void)unEnableTransferGroup;
- (BOOL)hasNeedTransferGroup;
- (BOOL)isIgnoreNotificationFeedIdExist:(id)a0;
- (void)addIgnoreNotificationFeedId:(id)a0;
- (void)removeIgnoreNotificationFeedId:(id)a0;
- (void)addWsFoldTimestamp:(unsigned long long)a0 Username:(id)a1;
- (unsigned long long)getWsFoldTimestamp:(id)a0;
- (void)updateIsNotFirstTimeUsername:(id)a0;
- (BOOL)checkIsNotFirstTimeUsername:(id)a0;
- (void).cxx_destruct;

@end
