@class LiveSdkInfo, NSString, NSData, MMLiveAnchorStatusItem, LiveInfo, NSMutableArray;

@interface MMLiveInfoWrap : NSObject

@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) LiveSdkInfo *liveSdkInfo;
@property (retain, nonatomic) LiveInfo *liveInfo;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSMutableArray *currentRoomIds;
@property (retain, nonatomic) NSString *latestLiveMicId;
@property (retain, nonatomic) MMLiveAnchorStatusItem *anchorStatusItem;

- (void).cxx_destruct;

@end
