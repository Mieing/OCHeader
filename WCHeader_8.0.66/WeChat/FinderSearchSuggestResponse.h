@class NSData, NSMutableArray, BaseResponse;

@interface FinderSearchSuggestResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *suggest;
@property (retain, nonatomic) NSData *sessionBuffer;

+ (void)initialize;

@end
