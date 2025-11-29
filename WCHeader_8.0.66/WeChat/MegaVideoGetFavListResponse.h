@class NSData, NSMutableArray, BaseResponse;

@interface MegaVideoGetFavListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int megavideoTotalCount;
@property (nonatomic) unsigned int finderTotalCount;
@property (nonatomic) unsigned int totalCount;

+ (void)initialize;

@end
