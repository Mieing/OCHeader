@class AWEProfilePromptModel, AWEProtectedNicknameModel;

@interface AWEProfileFrequencyInfoModel : AWEBaseApiModel

@property (nonatomic) BOOL useNew;
@property (retain, nonatomic) AWEProfilePromptModel *nickNamePrompt;
@property (retain, nonatomic) AWEProfilePromptModel *uniqueIDPrompt;
@property (retain, nonatomic) AWEProfilePromptModel *protectNicknamePrompt;
@property (retain, nonatomic) AWEProtectedNicknameModel *protectNickname;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
