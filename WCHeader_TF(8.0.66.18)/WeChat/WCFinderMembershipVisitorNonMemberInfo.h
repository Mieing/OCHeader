@class NSString, NSData, FinderLiveNoticeListInfo, NSMutableArray;

@interface WCFinderMembershipVisitorNonMemberInfo : NSObject <PBCoding>

@property (retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo;
@property (retain, nonatomic) NSMutableArray *previewVideoArray;
@property (nonatomic) unsigned long long otherVideoNum;
@property (retain, nonatomic) NSMutableArray *previewLiveArray;
@property (nonatomic) unsigned long long otherLiveNum;
@property (retain, nonatomic) NSMutableArray *previewActivityArray;
@property (nonatomic) unsigned long long totalActivityNum;
@property (retain, nonatomic) NSMutableArray *moreVideoPreviewInfoArray;
@property (retain, nonatomic) NSMutableArray *moreLivePreviewInfoArray;
@property (retain, nonatomic) NSData *videoShortLastBuffer;
@property (retain, nonatomic) NSData *liveShortLastBuffer;
@property (nonatomic) unsigned long long videoShortNum;
@property (nonatomic) unsigned long long liveShortNum;
@property (nonatomic) unsigned long long previewVideoLastUpdateTime;
@property (nonatomic) unsigned long long previewLiveLastUpdateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_liveNoticeListInfo;
+ (void)PBArrayAdd_previewVideoArray;
+ (void)PBArrayAdd_otherVideoNum;
+ (void)PBArrayAdd_previewLiveArray;
+ (void)PBArrayAdd_otherLiveNum;
+ (void)PBArrayAdd_moreVideoPreviewInfoArray;
+ (void)PBArrayAdd_moreLivePreviewInfoArray;
+ (void)PBArrayAdd_previewActivityArray;
+ (void)PBArrayAdd_totalActivityNum;
+ (void)PBArrayAdd_videoShortLastBuffer;
+ (void)PBArrayAdd_liveShortLastBuffer;
+ (void)PBArrayAdd_videoShortNum;
+ (void)PBArrayAdd_liveShortNum;
+ (void)PBArrayAdd_previewVideoLastUpdateTime;
+ (void)PBArrayAdd_previewLiveLastUpdateTime;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithVisitorNonMemberInfo:(id)a0;
- (void)memberFeedIsPreview:(id)a0 isPreview:(BOOL)a1;
- (void).cxx_destruct;

@end
