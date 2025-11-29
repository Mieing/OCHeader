@class NSString;

@interface IESECLiveAnchorSettingHintModel : IESECLiveApiBaseModel

@property (copy, nonatomic) NSString *hintTitle;
@property (copy, nonatomic) NSString *subHintTitle;
@property (copy, nonatomic) NSString *subHintName;
@property (copy, nonatomic) NSString *guideBubbleText;
@property (nonatomic) BOOL hasShowSubHint;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
