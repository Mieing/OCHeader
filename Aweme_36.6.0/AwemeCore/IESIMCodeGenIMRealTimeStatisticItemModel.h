@class NSString;

@interface IESIMCodeGenIMRealTimeStatisticItemModel : AWEBaseDataModel

@property (nonatomic) long long key;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) long long tag;
@property (copy, nonatomic) NSString *bubbleNotice;
@property (copy, nonatomic) NSString *bubbleNoticeJumpSchema;
@property (nonatomic) long long bubbleNoticeIntervalDays;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
