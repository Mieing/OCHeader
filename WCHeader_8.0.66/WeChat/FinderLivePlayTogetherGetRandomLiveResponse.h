@class NSData, NSMutableArray, BaseResponse;

@interface FinderLivePlayTogetherGetRandomLiveResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *randomLiveLastBuffer;
@property (nonatomic) unsigned int preloadInterval;

+ (void)initialize;

@end
