@class NSMutableArray, BaseResponse;

@interface FinderGetUserMoreInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *pair;
@property (retain, nonatomic) NSMutableArray *sections;

+ (void)initialize;

@end
