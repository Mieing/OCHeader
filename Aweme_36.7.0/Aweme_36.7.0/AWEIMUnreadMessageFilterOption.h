@class NSString;

@interface AWEIMUnreadMessageFilterOption : NSObject <NSCopying>

@property (nonatomic) long long filterOptionType;
@property (copy, nonatomic) NSString *filterOptionValue;
@property (copy, nonatomic) NSString *customConversationId;
@property (nonatomic) BOOL shouldAlwaysQuery;
@property (copy, nonatomic) NSString *chatSessionId;

- (void).cxx_destruct;
- (BOOL)hasValue;
- (unsigned long long)hash;
- (id)identifier;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
