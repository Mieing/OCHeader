@interface IESLiveMIFullLinkChatDisplayDataModel : NSObject

@property (nonatomic) long long chatSendCount;
@property (nonatomic) long long chatSendSuccessCount;
@property (nonatomic) long long chatDisplayCount;
@property (nonatomic) double chatTimeFromSendToSucceed;
@property (nonatomic) double chatTimeFromSendToDisplay;

@end
