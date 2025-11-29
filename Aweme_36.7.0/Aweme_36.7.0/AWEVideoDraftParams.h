@class NSDictionary, NSString, ACCAIGCLoraUgcPromptModel;

@interface AWEVideoDraftParams : NSObject

@property (copy, nonatomic) NSDictionary *eventParams;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *effectID;
@property (copy, nonatomic) NSString *stickerID;
@property (copy, nonatomic) NSString *stickerTextInfo;
@property (nonatomic) long long initialScene;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *aiEffectID;
@property (copy, nonatomic) NSString *loraResourceType;
@property (nonatomic) BOOL isImageTemplate;
@property (retain, nonatomic) ACCAIGCLoraUgcPromptModel *ugcPrompt;

- (void).cxx_destruct;

@end
