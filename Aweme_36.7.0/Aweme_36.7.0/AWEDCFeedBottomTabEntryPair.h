@class AWEDCFeedBottomTabDataModel;
@protocol AWEHPBottomTabSpecialEntryModelProtocol;

@interface AWEDCFeedBottomTabEntryPair : NSObject

@property (retain, nonatomic) AWEDCFeedBottomTabDataModel *dataModel;
@property (retain, nonatomic) id<AWEHPBottomTabSpecialEntryModelProtocol> entry;
@property (nonatomic) long long priority;

- (void).cxx_destruct;

@end
