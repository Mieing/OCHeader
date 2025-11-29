@class NSString, PromptButton, NSMutableArray, BaseResponse;

@interface FaceIdentifyPrePageResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (retain, nonatomic) PromptButton *prompt;
@property (retain, nonatomic) NSString *bizNickName;
@property (retain, nonatomic) NSString *headerPromptWording;
@property (retain, nonatomic) NSString *feedbackUrl;
@property (retain, nonatomic) NSString *complainUrl;
@property (nonatomic) float lightThreshold;
@property (nonatomic) unsigned int checkAliveType;
@property (retain, nonatomic) NSString *businessTips;
@property (retain, nonatomic) NSString *bizHeadUrl;
@property (nonatomic) float faceFrameRatio;
@property (retain, nonatomic) NSString *errTips;
@property (retain, nonatomic) NSString *identifyId;
@property (retain, nonatomic) NSString *sdkSetting;
@property (retain, nonatomic) NSString *sgHeaderWording;
@property (retain, nonatomic) PromptButton *sgPrompt;
@property (retain, nonatomic) NSString *businessTipsColor;

+ (void)initialize;

@end
