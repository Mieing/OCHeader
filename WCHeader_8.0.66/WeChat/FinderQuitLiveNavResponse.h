@class NSData, NSMutableArray, BaseResponse;

@interface FinderQuitLiveNavResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *containerList;
@property (nonatomic) unsigned int preloadIntervalSec;
@property (retain, nonatomic) NSData *jumpNavliveBuffer;

+ (void)initialize;

@end
