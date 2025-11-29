@class NSString, QIndoorInfo;

@interface QPointAnnotation : QShape <QAnnotation>

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (copy) NSString *title;
@property (copy) NSString *subtitle;
@property (nonatomic) BOOL lockedToScreen;
@property (nonatomic) struct CGPoint { double x; double y; } lockedScreenPoint;
@property (retain, nonatomic) QIndoorInfo *indoorInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notTriggerKVOToSetCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
