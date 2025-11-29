@class NSString, NSData, NSMutableArray, BaseResponse;

@interface FinderSearchGetHotWordListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *hotWord;
@property (retain, nonatomic) NSString *boxTitle;
@property (retain, nonatomic) NSData *hotwordLastBuff;

+ (void)initialize;

@end
