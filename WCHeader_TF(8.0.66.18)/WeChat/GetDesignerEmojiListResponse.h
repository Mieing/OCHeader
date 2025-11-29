@class BaseResponse, NSData, NSMutableArray, SKBuiltinBuffer_t;

@interface GetDesignerEmojiListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *emoji;
@property (retain, nonatomic) SKBuiltinBuffer_t *pageBuf;
@property (retain, nonatomic) NSMutableArray *tag;
@property (retain, nonatomic) NSData *extPageContext;

+ (void)initialize;

@end
