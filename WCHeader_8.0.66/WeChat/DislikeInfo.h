@class NSMutableArray;

@interface DislikeInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *likeReasonList;
@property (retain, nonatomic) NSMutableArray *dislikeReasonList;
@property (retain, nonatomic) NSMutableArray *closeReasonList;

+ (void)initialize;

@end
