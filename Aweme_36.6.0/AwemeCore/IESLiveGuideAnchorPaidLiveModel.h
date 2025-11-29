@class NSString, NSNumber;

@interface IESLiveGuideAnchorPaidLiveModel : NSObject

@property (nonatomic) long long ticketID;
@property (retain, nonatomic) NSString *paidLiveImageURL;
@property (retain, nonatomic) NSString *paidLiveCoverUri;
@property (retain, nonatomic) NSString *paidLiveTitle;
@property (retain, nonatomic) NSString *paidLiveTime;
@property (retain, nonatomic) NSString *action;
@property (retain, nonatomic) NSString *ownerID;
@property (retain, nonatomic) NSNumber *soldCount;
@property (nonatomic) BOOL isReplay;
@property (retain, nonatomic) NSString *enterWithPaidLiveInfo;
@property (retain, nonatomic) NSString *liveScene;
@property (retain, nonatomic) NSString *uploadTime;
@property (retain, nonatomic) NSString *toastContent;
@property (retain, nonatomic) NSString *paidLiveStatus;
@property (retain, nonatomic) NSString *paidTicketFrom;
@property (retain, nonatomic) NSNumber *ticketVisibilityRange;
@property (nonatomic) unsigned long long paidLiveAuditStatus;
@property (nonatomic) long long sellTicketID;
@property (retain, nonatomic) NSNumber *maxPreviewDuration;

- (void).cxx_destruct;

@end
