@class NSData, NSMutableArray, BaseResponse;

@interface FinderOriginalUserFeedsResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
