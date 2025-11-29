@class AWECodeGenAnchorEditAuthModel, NSString, AWECodeGenCommonAnchorModel, AWECodeGenAnchorPublishModel;

@interface AWECodeGenAwemeV1ItemAnchorInfoResponseModel : AWEBaseDataModel

@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) AWECodeGenCommonAnchorModel *commonAnchorModel;
@property (retain, nonatomic) AWECodeGenAnchorEditAuthModel *editAuthModel;
@property (nonatomic) BOOL isDeleted;
@property (retain, nonatomic) AWECodeGenAnchorPublishModel *updateAnchorInfoModel;
@property (copy, nonatomic) NSString *originAnchorContent;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
