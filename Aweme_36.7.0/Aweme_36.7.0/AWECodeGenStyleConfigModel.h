@class NSString, AWECodeGenCoverConfigModel;

@interface AWECodeGenStyleConfigModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *emptySubTitleContent;
@property (copy, nonatomic) NSString *openBtnIcon;
@property (copy, nonatomic) NSString *emptyOpenBtnIcon;
@property (copy, nonatomic) NSString *emptyButtonText;
@property (copy, nonatomic) NSString *coverStyle;
@property (copy, nonatomic) NSString *emptyCoverStyle;
@property (retain, nonatomic) AWECodeGenCoverConfigModel *aroundCoverConfigModel;
@property (retain, nonatomic) AWECodeGenCoverConfigModel *emptyAroundCoverConfigModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
