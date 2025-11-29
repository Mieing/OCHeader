@class NSString;

@interface AWECodeGenBaseNoticeTypeModel : AWEBaseDataModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasUnread;
@property (nonatomic) int unreadCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
