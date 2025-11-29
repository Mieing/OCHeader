@class NSData, NSMutableArray, BaseResponse;

@interface FinderGetBlockPosterListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *contactList;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int blockCount;

+ (void)initialize;

@end
