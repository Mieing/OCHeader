@interface WCAdSliderCardReportItemModel : NSObject

@property (nonatomic) int index;
@property (nonatomic) int mediaType;
@property (nonatomic) int hasBorder;
@property (nonatomic) unsigned int exposureCount;
@property (nonatomic) unsigned int autoSlideInCount;
@property (nonatomic) unsigned int clickCount;
@property (nonatomic) unsigned int btnClickCount;
@property (nonatomic) unsigned int productClickCount;
@property (nonatomic) unsigned int playCount;
@property (nonatomic) unsigned int finishPlayCount;
@property (nonatomic) unsigned long long playTotalTime;
@property (nonatomic) unsigned long long maxPlayTime;
@property (nonatomic) unsigned long long videoTotalTime;

@end
