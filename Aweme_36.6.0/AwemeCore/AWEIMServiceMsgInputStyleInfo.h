@class AWEIMServiceMsgInputBnxInfo;

@interface AWEIMServiceMsgInputStyleInfo : AWEBaseBizConfigModel

@property (nonatomic) BOOL canUseInputBox;
@property (nonatomic) BOOL canUseImMenu;
@property (nonatomic) long long defaultShow;
@property (retain, nonatomic) AWEIMServiceMsgInputBnxInfo *inputBoxInfo;

+ (id)inputBoxInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
