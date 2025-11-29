@class NSMutableArray, BaseResponse;

@interface FinderLiveRandomMicResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *randomContactList;

+ (void)initialize;

@end
