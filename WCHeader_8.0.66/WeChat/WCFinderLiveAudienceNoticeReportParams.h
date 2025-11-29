@class NSString, FinderLiveNoticeInfo;

@interface WCFinderLiveAudienceNoticeReportParams : NSObject

@property (copy, nonatomic) NSString *finderUsername;
@property (readonly, copy, nonatomic) id /* block */ finderUsername_link;
@property (copy, nonatomic) NSString *refPageType;
@property (readonly, copy, nonatomic) id /* block */ refPageType_link;
@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (readonly, copy, nonatomic) id /* block */ noticeInfo_link;
@property (copy, nonatomic) NSString *commentScene;
@property (readonly, copy, nonatomic) id /* block */ commentScene_link;
@property (copy, nonatomic) NSString *idOfCouponBindToNotice;
@property (readonly, copy, nonatomic) id /* block */ idOfCouponBindToNotice_link;
@property (nonatomic) BOOL brandActionContain;
@property (nonatomic) unsigned long long brandAction;
@property (readonly, copy, nonatomic) id /* block */ brandAction_link;
@property (nonatomic) BOOL noticeActionContain;
@property (nonatomic) long long noticeAction;
@property (readonly, copy, nonatomic) id /* block */ noticeAction_link;
@property (nonatomic) BOOL noticeSceneContain;
@property (nonatomic) long long noticeScene;
@property (readonly, copy, nonatomic) id /* block */ noticeScene_link;
@property (nonatomic) BOOL fromSceneContain;
@property (nonatomic) long long fromScene;
@property (readonly, copy, nonatomic) id /* block */ fromScene_link;
@property (nonatomic) BOOL reserveOrUnreserveForAll;
@property (readonly, copy, nonatomic) id /* block */ reserveOrUnreserveForAll_link;
@property (nonatomic) BOOL reportProfileExposeOnlyOnceForInstance;
@property (readonly, copy, nonatomic) id /* block */ reportProfileExposeOnlyOnceForInstance_link;
@property (nonatomic) BOOL useDefaultADData;
@property (readonly, copy, nonatomic) id /* block */ useDefaultADData_link;
@property (nonatomic) BOOL clearADDataAfterReportForBook;
@property (readonly, copy, nonatomic) id /* block */ clearADDataAfterReportForBook_link;
@property (nonatomic) BOOL isFromDetailNotice;
@property (readonly, copy, nonatomic) id /* block */ isFromDetailNotice_link;
@property (copy, nonatomic) NSString *feedAdReportInfo;
@property (readonly, copy, nonatomic) id /* block */ feedAdReportInfo_link;
@property (copy, nonatomic) NSString *fromFeedID;
@property (readonly, copy, nonatomic) id /* block */ fromFeedID_link;

- (void).cxx_destruct;

@end
