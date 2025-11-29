@class AWEIMUser, AWEIMImageTrackerConfig, NSString, NSArray;

@interface AWEIMTopAvatarCardProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) AWEIMUser *user;
@property (retain, nonatomic) AWEIMImageTrackerConfig *avatarTrackConfig;
@property (copy, nonatomic) NSString *nameText;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *recommendText;
@property (copy, nonatomic) NSArray *tagList;
@property (copy, nonatomic) NSString *schoolName;
@property (nonatomic) BOOL hidProfile;
@property (nonatomic) long long signatureLines;
@property (copy, nonatomic) id /* block */ jumpProfileBlock;

- (void).cxx_destruct;

@end
