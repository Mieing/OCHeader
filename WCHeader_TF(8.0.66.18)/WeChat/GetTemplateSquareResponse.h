@class NSData, NSMutableArray, BaseResponse;

@interface GetTemplateSquareResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *tpls;
@property (retain, nonatomic) NSData *pageBuffer;
@property (retain, nonatomic) NSMutableArray *categoryList;
@property (nonatomic) unsigned int maxAge;

+ (void)initialize;

@end
