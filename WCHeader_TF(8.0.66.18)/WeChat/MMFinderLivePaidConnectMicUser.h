@class NSString;

@interface MMFinderLivePaidConnectMicUser : MMFinderLiveConnectMicUser

@property (nonatomic) unsigned long long paidAmount;
@property (retain, nonatomic) NSString *consultContent;
@property (nonatomic) BOOL isOnline;
@property (nonatomic) BOOL expandContentIfNeeded;

+ (id)connectMicUserFromAudience:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateSDKUserId:(id)a0;
- (void)updateConnecting:(BOOL)a0;
- (void)updateConnectWaiting:(BOOL)a0;
- (void)updateLocalCloseState:(unsigned long long)a0;
- (BOOL)alreadyTimeout;
- (void).cxx_destruct;

@end
