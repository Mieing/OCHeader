@class BaseRequest, NSString, NSMutableArray;

@interface KFGetInfoListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *kfBrandUsername;
@property (retain, nonatomic) NSMutableArray *kfOpenIdList;
@property (retain, nonatomic) NSMutableArray *kfTypeList;

+ (void)initialize;

@end
