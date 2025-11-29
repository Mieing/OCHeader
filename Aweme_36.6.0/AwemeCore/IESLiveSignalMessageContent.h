@class NSString;

@interface IESLiveSignalMessageContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *targetId;
@property (copy, nonatomic) NSString *targetUid;
@property (copy, nonatomic) NSString *targetUidStr;
@property (copy, nonatomic) NSString *sendId;
@property (copy, nonatomic) NSString *sendUid;
@property (copy, nonatomic) NSString *sendUidStr;
@property (copy, nonatomic) NSString *ver;
@property (nonatomic) long long priority;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *extras;

+ (id)descriptor;

@end
