@class WCFinderDataItem;

@interface WCFinderFeedPickerSelectedInfo : NSObject

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) long long eventCode;

- (id)initWithParams:(id)a0 eventCode:(long long)a1;
- (void).cxx_destruct;

@end
