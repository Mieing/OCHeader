@class NSData, NSMutableArray, BaseResponse;

@interface FinderGetPlayHistoryResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *objects;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int recentNDays;
@property (retain, nonatomic) NSMutableArray *items;

+ (void)initialize;

@end
