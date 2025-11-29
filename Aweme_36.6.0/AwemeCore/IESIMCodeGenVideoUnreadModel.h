@class NSArray;

@interface IESIMCodeGenVideoUnreadModel : AWEBaseDataModel

@property (nonatomic) int unreadCount;
@property (nonatomic) long long latestUnreadVideoCreatedTime;
@property (copy, nonatomic) NSArray *awemeIdsArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
