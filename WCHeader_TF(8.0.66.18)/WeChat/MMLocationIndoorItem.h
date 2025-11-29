@class QIndoorInfo;

@interface MMLocationIndoorItem : NSObject

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } location;
@property (retain, nonatomic) QIndoorInfo *indoorInfo;

- (void).cxx_destruct;

@end
