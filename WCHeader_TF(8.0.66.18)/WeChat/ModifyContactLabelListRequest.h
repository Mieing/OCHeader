@class BaseRequest, NSMutableArray;

@interface ModifyContactLabelListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int userCount;
@property (retain, nonatomic) NSMutableArray *userLabelInfoList;

+ (void)initialize;

@end
