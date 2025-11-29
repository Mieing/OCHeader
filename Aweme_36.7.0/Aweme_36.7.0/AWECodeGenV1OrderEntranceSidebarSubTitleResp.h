@class NSString, AWECodeGenOrderEntranceSidebarDataModel;

@interface AWECodeGenV1OrderEntranceSidebarSubTitleResp : AWEBaseResponseModel

@property (retain, nonatomic) AWECodeGenOrderEntranceSidebarDataModel *dataModel;
@property (copy, nonatomic) NSString *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
