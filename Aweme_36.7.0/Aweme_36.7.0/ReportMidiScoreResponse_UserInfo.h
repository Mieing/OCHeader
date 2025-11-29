@class NSString, HTSLiveImage;

@interface ReportMidiScoreResponse_UserInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) HTSLiveImage *avatar;
@property (nonatomic) BOOL hasAvatar;
@property (copy, nonatomic) NSString *uidStr;
@property (copy, nonatomic) NSString *secUid;

+ (id)descriptor;

@end
