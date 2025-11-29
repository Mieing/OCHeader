@class NSString;

@interface IESLivePublicScreenASRMsgItem : NSObject

@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *msgType;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *userNickName;
@property (nonatomic) double fetchTimeStamp;
@property (nonatomic) double displayTimeStamp;

- (void).cxx_destruct;

@end
