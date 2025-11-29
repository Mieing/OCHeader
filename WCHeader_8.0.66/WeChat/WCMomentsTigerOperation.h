@class WCDataItem;

@interface WCMomentsTigerOperation : NSObject

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long displayCount;
@property (nonatomic) double lastDisplayTime;
@property (nonatomic) unsigned long long clickCount;
@property (nonatomic) double lastClickTime;

- (void).cxx_destruct;

@end
