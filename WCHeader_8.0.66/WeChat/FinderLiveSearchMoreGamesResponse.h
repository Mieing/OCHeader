@class NSString, NSMutableArray, BaseResponse;

@interface FinderLiveSearchMoreGamesResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *gameUserInfo;
@property (nonatomic) BOOL hasNext;
@property (retain, nonatomic) NSString *nextOffset;

+ (void)initialize;

@end
