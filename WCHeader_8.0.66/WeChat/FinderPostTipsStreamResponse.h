@class NSString, NSData, NSMutableArray, BaseResponse;

@interface FinderPostTipsStreamResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *words;
@property (retain, nonatomic) NSString *title;

+ (void)initialize;

@end
