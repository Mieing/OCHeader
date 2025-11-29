@interface IESLiveLinkMicAudienceMicrophoneItem : IESLivePBBaseMessage

@property (nonatomic) int microphoneType;
@property (nonatomic) long long microPhoneNum;

+ (id)descriptor;

@end
