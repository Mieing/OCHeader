@class NSString, FinderJumpInfo_LiteApp, CContact;

@interface MMFinderLiveECBaseShareTask : NSObject

@property (nonatomic) long long taskType;
@property (copy, nonatomic) NSString *anchorFinderUsername;
@property (copy, nonatomic) NSString *lastGMsgID;
@property (nonatomic) long long showShareType;
@property (nonatomic) BOOL showQRCodeEntrance;
@property (copy, nonatomic) NSString *qrCodeEntranceText;
@property (nonatomic) BOOL showCopyLinkEntrance;
@property (nonatomic) BOOL isGiveGiftEnable;
@property (nonatomic) BOOL hideGiveGiftEntrance;
@property (nonatomic) BOOL showShareTimeline;
@property (nonatomic) BOOL enableShareTimeline;
@property (copy, nonatomic) NSString *linkContent;
@property (nonatomic) BOOL showComplaintEntrance;
@property (retain, nonatomic) FinderJumpInfo_LiteApp *complaintApp;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) CContact *contact;
@property (copy, nonatomic) id /* block */ compleBlock;
@property (copy, nonatomic) NSString *passBuffer;

- (id)init;
- (void)updateComplaintAppWithLiteAppId:(id)a0 liteQuery:(id)a1;
- (void).cxx_destruct;

@end
