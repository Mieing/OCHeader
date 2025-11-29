@class NSString;

@interface AWEProfileBubbleUlikeInvitationLetterManager : NSObject

@property (nonatomic) BOOL showing;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long intervalDays;
@property (readonly, nonatomic) long long days;
@property (readonly, nonatomic) long long times;

+ (id)sharedInstance;

- (BOOL)canShow;
- (id)getStoregeKeyWithOriginKey:(id)a0;
- (void)fetchUlikeAuthAccount;
- (BOOL)fetchAuthInfoWithSource;
- (void).cxx_destruct;
- (id)init;
- (void)didDismiss;
- (void)didShow;

@end
