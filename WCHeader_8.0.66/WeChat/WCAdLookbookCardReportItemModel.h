@interface WCAdLookbookCardReportItemModel : NSObject

@property (nonatomic) unsigned long long index;
@property (nonatomic) int mediaType;
@property (nonatomic) unsigned int exposureCount;
@property (nonatomic) unsigned int clickCount;
@property (nonatomic) unsigned int playCount;
@property (nonatomic) unsigned int finishPlayCount;
@property (nonatomic) unsigned long long playTotalTime;
@property (nonatomic) unsigned long long maxPlayTime;
@property (nonatomic) unsigned long long videoTotalTime;

- (id)initWithReportItem:(id)a0;

@end
