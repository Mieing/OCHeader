@class NSString;

@interface GetRoomIntroResponse_Data_IntroGuideButton : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *guideText;

+ (id)descriptor;

@end
