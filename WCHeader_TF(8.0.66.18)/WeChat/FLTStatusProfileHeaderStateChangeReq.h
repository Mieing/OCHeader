@class NSString;

@interface FLTStatusProfileHeaderStateChangeReq : WXPBGeneratedMessage

@property (nonatomic) int cardDisplayScene;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) double foldExposeHeight;
@property (nonatomic) BOOL isExistStatus;
@property (retain, nonatomic) NSString *profileKey;

+ (void)initialize;

@end
