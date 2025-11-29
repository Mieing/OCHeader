@interface AWEIMConsecutiveChatDataModel : NSObject

@property (nonatomic) long long newExpireTimeStamp;
@property (nonatomic) long long canRecoverDay;

- (id)initWithConsecutiveChatDataInfoString:(id)a0;
- (id)initWithNewExpireTimeStamp:(long long)a0 canRecoverDay:(long long)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
