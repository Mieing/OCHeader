@class NSString, FinderGetLiveInfoReq_FinderGetLiveInfoSceneNotificationInfo, WCFinderDataItem, FinderGetLiveInfoReq_LiveADBypassInfo;

@interface WCFinderLiveGetLiveInfoParams : NSObject

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) unsigned long long liveID;
@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) int scene;
@property (retain, nonatomic) FinderGetLiveInfoReq_LiveADBypassInfo *liveADByPassInfo;
@property (retain, nonatomic) FinderGetLiveInfoReq_FinderGetLiveInfoSceneNotificationInfo *notificationInfo;

+ (id)paramsWithDataItem:(id)a0;
+ (id)paramsWithLiveID:(unsigned long long)a0 finderUsername:(id)a1;

- (void).cxx_destruct;

@end
