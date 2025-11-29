@class NSString, NSMutableArray;

@interface IESLiveRevenueInteractLinkerConnectModel : NSObject

@property (nonatomic) unsigned long long connectRole;
@property (retain, nonatomic) NSMutableArray *waitFirstFrameArray;
@property (nonatomic) long long waitFrameTotalCount;
@property (nonatomic) BOOL isFromTransform;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSString *connectionId;

- (void).cxx_destruct;

@end
