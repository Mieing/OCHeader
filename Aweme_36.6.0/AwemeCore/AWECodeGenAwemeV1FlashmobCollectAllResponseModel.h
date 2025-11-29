@class NSString, AWECodeGenColDataModel;

@interface AWECodeGenAwemeV1FlashmobCollectAllResponseModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenColDataModel *dataModel;
@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *statusMsg;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
