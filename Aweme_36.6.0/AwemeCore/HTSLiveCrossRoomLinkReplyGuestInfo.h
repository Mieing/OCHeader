@class NSString;

@interface HTSLiveCrossRoomLinkReplyGuestInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (nonatomic) BOOL isLowClientVersion;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isNotSupportApp;
@property (copy, nonatomic) NSString *userIdStr;

+ (id)descriptor;

@end
