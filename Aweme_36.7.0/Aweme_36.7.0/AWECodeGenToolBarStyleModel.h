@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenToolBarStyleModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) AWECodeGenUrlModel *noticeIconModel;
@property (retain, nonatomic) AWECodeGenUrlModel *clickIconModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
