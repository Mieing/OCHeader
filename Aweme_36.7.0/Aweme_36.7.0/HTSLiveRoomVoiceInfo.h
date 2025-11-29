@class NSString;

@interface HTSLiveRoomVoiceInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (nonatomic) long long voice;
@property (copy, nonatomic) NSString *openUid;

+ (id)descriptor;

@end
