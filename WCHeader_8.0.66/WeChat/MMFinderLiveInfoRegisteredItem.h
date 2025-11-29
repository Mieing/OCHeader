@class WCFinderDataItem;

@interface MMFinderLiveInfoRegisteredItem : NSObject

@property (retain, nonatomic) WCFinderDataItem *finderDataItem;
@property (nonatomic) unsigned long long registeredCount;

- (void).cxx_destruct;

@end
