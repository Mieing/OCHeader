@class NSString, CContact;

@interface MMLiveApplyConnectMicAudience : NSObject

@property (copy, nonatomic) NSString *sdkUserId;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *avatarUrlString;
@property (copy, nonatomic) NSString *avatarHDUrlString;
@property (copy, nonatomic) NSString *liveMicId;
@property (copy, nonatomic) NSString *identityId;
@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) BOOL isSelf;
@property (retain, nonatomic) CContact *contact;

- (void).cxx_destruct;

@end
