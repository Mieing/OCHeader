@class NSData, NSMutableArray, BaseResponse;

@interface FinderSearchEventResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *lastBuff;
@property (retain, nonatomic) NSMutableArray *eventList;
@property (nonatomic) unsigned int continueFlag;

+ (void)initialize;

@end
