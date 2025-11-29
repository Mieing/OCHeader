@class NSString, HTSLiveGameImageBundler;

@interface HTSLiveRemindIntroduce : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *gameId;
@property (retain, nonatomic) HTSLiveGameImageBundler *gameIcon;
@property (nonatomic) BOOL hasGameIcon;
@property (copy, nonatomic) NSString *content;

+ (id)descriptor;

@end
