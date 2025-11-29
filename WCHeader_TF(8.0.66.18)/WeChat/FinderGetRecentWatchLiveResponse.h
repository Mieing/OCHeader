@class NSString, NSData, NSMutableArray, BaseResponse;

@interface FinderGetRecentWatchLiveResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *containerList;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSString *bottomWording;

+ (void)initialize;

@end
