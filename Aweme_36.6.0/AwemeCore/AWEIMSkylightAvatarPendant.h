@class NSString, AWEIMOnlineContactAvatarViewModel;

@interface AWEIMSkylightAvatarPendant : NSObject

@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL isOnlineValid;
@property (retain, nonatomic) AWEIMOnlineContactAvatarViewModel *model;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (copy, nonatomic) NSString *uniqueFlag;

- (void)p_makeDecision;
- (BOOL)p_isOnlineWithModel:(id)a0;
- (void)updateOnlineStatus;
- (void).cxx_destruct;
- (void)updateStatus;

@end
