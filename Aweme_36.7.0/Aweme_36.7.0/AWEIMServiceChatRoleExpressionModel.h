@class NSString, IESIMCodeGenTagPopUpWindowModel;

@interface AWEIMServiceChatRoleExpressionModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long showType;
@property (nonatomic) long long tagType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *highLightText;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *iconUrlDark;
@property (copy, nonatomic) NSString *textBackgroudColorDark;
@property (copy, nonatomic) NSString *textBackgroudColorLight;
@property (retain, nonatomic) IESIMCodeGenTagPopUpWindowModel *popUpWindow;
@property (copy, nonatomic) NSString *highLightTextColorDark;
@property (copy, nonatomic) NSString *HighLightTextColorLight;
@property (copy, nonatomic) NSString *textColorDark;
@property (copy, nonatomic) NSString *textColorLight;
@property (copy, nonatomic) NSString *jumpSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
