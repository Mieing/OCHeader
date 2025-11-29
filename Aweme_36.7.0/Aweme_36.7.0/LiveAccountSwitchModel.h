@class NSString;

@interface LiveAccountSwitchModel : NSObject

@property (retain, nonatomic) NSString *sec_uid;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *avatarURL;
@property (retain, nonatomic) NSString *appName;
@property (nonatomic) BOOL isInList;

- (void).cxx_destruct;

@end
