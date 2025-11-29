@class NSString, HTSLiveImage;

@interface EndingPageReserveModule : IESLivePBBaseMessage

@property (nonatomic) long long stageId;
@property (retain, nonatomic) HTSLiveImage *backgroundImg;
@property (nonatomic) BOOL hasBackgroundImg;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long reserveId;
@property (nonatomic) long long ticketId;
@property (nonatomic) long long liveStartTime;
@property (nonatomic) long long reverseStatus;
@property (copy, nonatomic) NSString *reserveIdStr;
@property (copy, nonatomic) NSString *ticketIdStr;
@property (copy, nonatomic) NSString *anchorUserId;
@property (copy, nonatomic) NSString *anchorUserIdStr;
@property (copy, nonatomic) NSString *stageIdStr;

+ (id)descriptor;

@end
