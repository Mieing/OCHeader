@class NSString, AWECodeGenComponentUnavailableButtonModel;

@interface AWECodeGenComponentUnavailableNoticeModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWECodeGenComponentUnavailableButtonModel *leftButtonModel;
@property (retain, nonatomic) AWECodeGenComponentUnavailableButtonModel *rightButtonModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
