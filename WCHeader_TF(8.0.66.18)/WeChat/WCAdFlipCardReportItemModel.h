@interface WCAdFlipCardReportItemModel : NSObject

@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned int exposureCount;
@property (nonatomic) unsigned int playCount;
@property (nonatomic) unsigned int finishPlayCount;
@property (nonatomic) unsigned long long playTotalTime;
@property (nonatomic) unsigned long long videoTotalTime;

- (id)initWithReportItem:(id)a0;

@end
