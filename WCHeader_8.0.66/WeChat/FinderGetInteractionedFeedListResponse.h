@class NSData, NSMutableArray, BaseResponse;

@interface FinderGetInteractionedFeedListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSMutableArray *item;

+ (void)initialize;

@end
