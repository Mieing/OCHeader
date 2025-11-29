@class BaseRequest, NSMutableArray;

@interface BatchModContactTypeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int modTypeInfoCount;
@property (retain, nonatomic) NSMutableArray *modTypeInfoList;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
