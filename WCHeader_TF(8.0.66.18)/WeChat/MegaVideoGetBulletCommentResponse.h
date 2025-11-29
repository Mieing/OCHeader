@class NSData, NSMutableArray, BaseResponse;

@interface MegaVideoGetBulletCommentResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *commentList;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long commentTimestampMin;
@property (nonatomic) unsigned long long commentTimestampMax;

+ (void)initialize;

@end
