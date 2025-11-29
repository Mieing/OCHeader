@class NSArray, NSString, HTSLiveUser;

@interface IESLiveFollowBackPanelViewModel : NSObject

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) unsigned long long userType;
@property (copy, nonatomic) NSArray *avatarURLs;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *buttonAction;

- (void).cxx_destruct;

@end
