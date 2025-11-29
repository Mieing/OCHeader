@class NSData, NSMutableArray, BaseResponse;

@interface FinderGetFavTemplateListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *tpls;
@property (retain, nonatomic) NSData *pageBuffer;
@property (nonatomic) unsigned int maxAge;
@property (nonatomic) unsigned int continueFlag;

+ (void)initialize;

@end
