@class NSNumber, NSString;

@interface AWEModelLayerNoticeNetworkProvider.CodeGenV1NoticeNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ topNoticeIds;
    void /* function */ recentSingleNoticeTypes;
}

@property (nonatomic, retain) NSNumber *maxTime;
@property (nonatomic, retain) NSNumber *minTime;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, retain) NSNumber *isMarkRead;
@property (nonatomic, retain) NSNumber *noticeGroup;
@property (nonatomic, retain) NSNumber *noticeStyle;
@property (nonatomic, retain) NSNumber *addressBookAccess;
@property (nonatomic, retain) NSNumber *pinNoticeId;
@property (nonatomic, retain) NSNumber *subCategory;
@property (nonatomic, retain) NSNumber *scene;
@property (nonatomic, copy) NSString *topNoticeIds;
@property (nonatomic, retain) NSNumber *currentUnreadCount;
@property (nonatomic, retain) NSNumber *delNoticeId;
@property (nonatomic, retain) NSNumber *preload;
@property (nonatomic, retain) NSNumber *followNewShowAweme;
@property (nonatomic, retain) NSNumber *followNewContentStyle;
@property (nonatomic, retain) NSNumber *enableOfficialDisable;
@property (nonatomic, retain) NSNumber *noticeType;
@property (nonatomic, retain) NSNumber *enableTypeFilter;
@property (nonatomic, copy) NSString *recentSingleNoticeTypes;
@property (nonatomic, retain) NSNumber *isNewNotice;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
