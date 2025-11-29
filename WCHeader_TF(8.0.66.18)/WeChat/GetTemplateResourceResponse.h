@class NSMutableArray, BaseResponse;

@interface GetTemplateResourceResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *mediaResource;
@property (retain, nonatomic) NSMutableArray *tabs;

+ (void)initialize;

@end
