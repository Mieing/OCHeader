@class NSString, AWECodeGenRemindStyleModel, AWECodeGenPopupModel;

@interface AWECodeGenProfileRemindModel : AWEBaseDataModel

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *remindId;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *linkUrl;
@property (retain, nonatomic) AWECodeGenRemindStyleModel *lightStyleModel;
@property (retain, nonatomic) AWECodeGenRemindStyleModel *darkStyleModel;
@property (retain, nonatomic) AWECodeGenPopupModel *popupModel;
@property (copy, nonatomic) NSString *business;
@property (copy, nonatomic) NSString *remindLevel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
