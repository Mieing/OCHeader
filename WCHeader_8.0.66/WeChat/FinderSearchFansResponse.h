@class NSData, NSMutableArray, BaseResponse;

@interface FinderSearchFansResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *lastBuff;
@property (retain, nonatomic) NSMutableArray *fansContactList;

+ (void)initialize;

@end
