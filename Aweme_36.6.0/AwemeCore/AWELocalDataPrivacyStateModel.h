@class NSString;

@interface AWELocalDataPrivacyStateModel : NSObject

@property (retain, nonatomic) NSString *userID;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long blockStatus;
@property (nonatomic) long long blockedStatus;
@property (nonatomic) long long hideMyPostStatus;
@property (nonatomic) long long hideHerPostStatus;
@property (nonatomic) BOOL isNotOtherShowReverseExisted;

- (void).cxx_destruct;

@end
