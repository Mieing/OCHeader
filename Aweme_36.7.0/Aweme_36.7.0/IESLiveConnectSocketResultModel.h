@class NSString;

@interface IESLiveConnectSocketResultModel : IESLiveBridgeModel

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *socketTaskID;

@end
