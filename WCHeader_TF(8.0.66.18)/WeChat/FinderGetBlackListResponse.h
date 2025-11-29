@class NSData, NSMutableArray, BaseResponse;

@interface FinderGetBlackListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *contactList;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *lastBuff;

+ (void)initialize;

@end
