@class NSString, RingToneBGMInfo, WCFinderDataItem, NSMutableArray;

@interface FinderRingToneSubDetail : AbstractRingToneSubDetail

@property (nonatomic) unsigned long long objectId;
@property (readonly, copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSString *nonceId;
@property (copy, nonatomic) NSString *nickName;
@property (nonatomic) unsigned long long settingCount;
@property (copy, nonatomic) NSString *finderUserName;
@property (nonatomic) unsigned long long authProfessionType;
@property (copy, nonatomic) NSString *authIconURL;
@property (copy, nonatomic) NSString *authProfessionDesc;
@property (retain, nonatomic) RingToneBGMInfo *bgmInfo;
@property (copy, nonatomic) NSString *originalTitle;
@property (nonatomic) unsigned long long recommendReasonType;
@property (nonatomic) unsigned long long usedByFriendCount;
@property (nonatomic) unsigned long long titleType;
@property (copy, nonatomic) NSString *singer;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (copy, nonatomic) NSMutableArray *friendsUsedInfo;
@property (copy, nonatomic) NSString *customReason;
@property (nonatomic) unsigned long long cmdID;
@property (copy, nonatomic) NSString *singerFinderUserName;
@property (copy, nonatomic) NSString *singerBaikeURL;
@property (copy, nonatomic) NSString *itemContext;

- (id)initFromPb:(id)a0;
- (id)initFromFinderItem:(id)a0;
- (void).cxx_destruct;

@end
