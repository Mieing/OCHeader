@class NSString, HTSLiveImage, HTSLiveRelaxPriceInfo;

@interface HTSLiveRelaxPaidLiveDetail : IESLivePBBaseMessage

@property (nonatomic) long long ticketId;
@property (retain, nonatomic) HTSLiveImage *coverImage;
@property (nonatomic) BOOL hasCoverImage;
@property (retain, nonatomic) HTSLiveImage *verticalCoverImage;
@property (nonatomic) BOOL hasVerticalCoverImage;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long showStartTime;
@property (retain, nonatomic) HTSLiveRelaxPriceInfo *earlyBirdPrice;
@property (nonatomic) BOOL hasEarlyBirdPrice;
@property (retain, nonatomic) HTSLiveRelaxPriceInfo *fullPrice;
@property (nonatomic) BOOL hasFullPrice;
@property (retain, nonatomic) HTSLiveRelaxPriceInfo *activityPrice;
@property (nonatomic) BOOL hasActivityPrice;
@property (nonatomic) long long relationType;
@property (copy, nonatomic) NSString *ticketIdStr;
@property (copy, nonatomic) NSString *roomIdStr;
@property (copy, nonatomic) NSString *ticketPanelSixJumpURL;
@property (copy, nonatomic) NSString *ticketPanelJumpURL;
@property (copy, nonatomic) NSString *prepayCashierJumpURL;

+ (id)descriptor;

@end
