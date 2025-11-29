@class UIImage, NSString;

@interface WCFinderMegaVideoAttach : NSObject

@property (nonatomic) double playPosition;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) double showTime;
@property (nonatomic) unsigned long long maxShowedPercent;
@property (nonatomic) unsigned long long playTimes;
@property (retain, nonatomic) UIImage *capture;
@property (copy, nonatomic) NSString *draft;

- (void).cxx_destruct;

@end
