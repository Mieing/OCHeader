@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenAigcFollowShotLeftTopLabelModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) AWECodeGenUrlModel *urlModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
