@class NSString, NSArray, WANearByPreViewItem;

@interface WANearByInfo : MMObject

@property (copy, nonatomic) NSString *nearByAppH5String;
@property (nonatomic) unsigned int displayStrategyId;
@property (nonatomic) unsigned int nearByAppH5LifeSpan;
@property (nonatomic) unsigned int appCount;
@property (copy, nonatomic) NSString *listId;
@property (nonatomic) unsigned int nearByAppThreshold;
@property (retain, nonatomic) NSArray *previewItems;
@property (nonatomic) unsigned int startTime;
@property (copy, nonatomic) NSString *wording;
@property (copy, nonatomic) NSString *wordingColor;
@property (copy, nonatomic) NSString *noticeWording;
@property (copy, nonatomic) NSString *noticeWordingBgColor;
@property (nonatomic) BOOL disappearOneClick;
@property (nonatomic) BOOL openWxa;
@property (retain, nonatomic) WANearByPreViewItem *nearByEntry;

- (void).cxx_destruct;

@end
