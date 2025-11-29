@class NSNumber, NSString;

@interface AWEIMNoticeTypeStructModel : IESIMBaseApiModel

@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasUnread;
@property (nonatomic) long long unreadCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
