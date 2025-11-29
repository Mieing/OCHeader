@class NSString, AWECodeGenToolBarStyleModel;

@interface AWECodeGenServiceComponentToolBarModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *toolBarId;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *toolBarText;
@property (retain, nonatomic) AWECodeGenToolBarStyleModel *lightStyleModel;
@property (retain, nonatomic) AWECodeGenToolBarStyleModel *darkStyleModel;
@property (copy, nonatomic) NSString *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
