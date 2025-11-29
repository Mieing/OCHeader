@class NSString, NSData, NSMutableArray, BaseResponse;

@interface FinderSearchInteractionResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *objectList;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *lastBuff;
@property (retain, nonatomic) NSString *requestId;

+ (void)initialize;

@end
