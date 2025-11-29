@class WCAdvertiseCommentUploadMgr, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface WCAdvertiseDataHelper : MMObject {
    NSMutableArray *m_advertiseList;
    NSMutableArray *m_advertiseMsgXmlList;
    BOOL m_bLoaded;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataSaveQueue;
@property (retain, nonatomic) NSMutableDictionary *adPullCompareCache;
@property (retain, nonatomic) WCAdvertiseCommentUploadMgr *m_adCommentUploader;

- (id)init;
- (id)GetPathOfWCAdvertiseStorage;
- (BOOL)hasCommented:(id)a0 dataItem:(id)a1;
- (BOOL)hasOutOfCommentTime:(id)a0 dataItem:(id)a1;
- (BOOL)hasExposured:(id)a0 dataItem:(id)a1;
- (BOOL)hasOutOfExposureTime:(id)a0 dataItem:(id)a1;
- (BOOL)hasOutOfAdEndTime:(id)a0 dataItem:(id)a1;
- (BOOL)isAdPreviewExpired:(id)a0;
- (BOOL)IsAdvertiseDataValid:(id)a0 dataItem:(id)a1;
- (BOOL)IsAdvertiseDataCanBeReused:(id)a0 dataItem:(id)a1;
- (void)reuseAdvertiseData:(id)a0 extInfo:(id)a1;
- (void)reuseAdvertiseData:(id)a0 isFromServerPush:(BOOL)a1;
- (void)tryLoadAdvertiseData;
- (void)saveAdvertiseDatas;
- (unsigned int)getEarliestTimeOfCommentsAndLikes:(id)a0;
- (void)LL_addAdvertiseData:(id)a0 IsAtFriend:(BOOL)a1 needUpdateCreateTime:(BOOL)a2;
- (long long)advertiseStorageMaxCount;
- (void)addAdvertiseData:(id)a0 needUpdateCreateTime:(BOOL)a1;
- (void)addAdvertiseDataList:(id)a0;
- (void)deleteAdvertiseDataList:(id)a0 extInfo:(id)a1;
- (void)deleteAdvertiseDataList:(id)a0;
- (void)deleteAdvertiseData:(id)a0;
- (void)deleteAllAdvertiseData;
- (void)updateAdvertiseData:(id)a0;
- (void)updateAdvertiseDataList:(id)a0;
- (void)updateAdvertiseDataExceptCreateTime:(id)a0;
- (id)getAdvertiseDataByCurMinTime:(unsigned int)a0 MaxTime:(unsigned int)a1;
- (id)getAdvertiseDataByCurMinTime:(unsigned int)a0 MaxTime:(unsigned int)a1 checkDataValid:(BOOL)a2;
- (id)getTopAdvertiseDataByTopNumber:(unsigned int)a0;
- (id)getAdvertiseItemByID:(id)a0;
- (BOOL)isAdvertiseItemExistsWithID:(id)a0;
- (id)GetPathOfWCAdvertiseMsgXmlStorage;
- (void)saveAdvertiseMsgXmlDatas;
- (id)getAdvertiseMsgXmlList;
- (void)addAdvertiseMsgXml:(id)a0;
- (void)removeAllCacheAdvertiseMsgXml;
- (BOOL)checkInvalidAdData;
- (void)updateAtFriendAdvertiseData:(id)a0;
- (void)safeRemoveAdInAdListAtIndex:(unsigned long long)a0;
- (void)reportAdDeleteForExposureNoAction:(id)a0 dataItem:(id)a1;
- (void)saveAdPullCompareInfo:(id)a0;
- (id)fetchAdPullCompareInfo:(id)a0;
- (void)removeAdPullCompareInfo:(id)a0;
- (void)cleanAdPullCompareCache;
- (void)tryToStoreWuidFromHistoryAd;
- (void).cxx_destruct;

@end
