@interface AWEIMConsecutiveChatModel : NSObject

@property (nonatomic) long long chatDays;
@property (nonatomic) long long startTimeStamp;
@property (nonatomic) long long expireTimeStamp;
@property (nonatomic) BOOL shouldRender;
@property (nonatomic) unsigned long long source;
@property (nonatomic) BOOL minEnable;
@property (nonatomic) BOOL maxEnable;

- (id)initWithInfoString:(id)a0 source:(unsigned long long)a1;
- (id)initWithChatDays:(long long)a0 startTimeStamp:(long long)a1 expireTimeStamp:(long long)a2 shouldRender:(BOOL)a3 source:(unsigned long long)a4 minEnable:(BOOL)a5 maxEnable:(BOOL)a6;
- (id)initWithChatDays:(long long)a0 startTimeStamp:(long long)a1 expireTimeStamp:(long long)a2 shouldRender:(BOOL)a3 source:(unsigned long long)a4;
- (id)toStringWithSharedSyncExtFormat;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)toString;

@end
