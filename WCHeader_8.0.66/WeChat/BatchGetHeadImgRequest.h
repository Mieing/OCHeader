@class BaseRequest, NSMutableArray;

@interface BatchGetHeadImgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *userNameList;

+ (void)initialize;

@end
