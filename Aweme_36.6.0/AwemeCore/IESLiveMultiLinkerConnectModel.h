@class NSString, NSMutableArray;

@interface IESLiveMultiLinkerConnectModel : NSObject

@property (nonatomic) unsigned long long connectRole;
@property (retain, nonatomic) NSMutableArray *waitFirstFrameArray;
@property (nonatomic) long long waitFrameTotalCount;
@property (nonatomic) BOOL isFromTransform;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSString *connectionId;
@property (nonatomic) long long fromStatus;
@property (nonatomic) long long oppositeStatus;

- (void).cxx_destruct;

@end
