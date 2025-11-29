@class NSString;

@interface IESIMCodeGenTagPopUpWindowModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *tagName;
@property (copy, nonatomic) NSString *tagDescription;
@property (copy, nonatomic) NSString *updateFreq;
@property (copy, nonatomic) NSString *buttonText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
