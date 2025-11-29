@interface AWEIMEnterChatInsertMsgStrategy : AWEBaseApiModel

@property (readonly, nonatomic) long long exitStrategy;
@property (readonly, nonatomic) long long showPosition;
@property (readonly, nonatomic) long long preCheckMsgCount;
@property (readonly, nonatomic) long long showTimes;

+ (id)JSONKeyPathsByPropertyKey;

@end
