@class NSString, AppMonitorDimensionValueSet, AppMonitorMeasureValueSet;

@interface AppMonitorRawStatEvent : AppMonitorEvent <AppMonitorRawEventProtocol>

@property (retain, nonatomic) AppMonitorDimensionValueSet *dimensionValues;
@property (retain, nonatomic) AppMonitorMeasureValueSet *measureValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseRawUTMsg:(id)a0;

- (id)dumpToUTEvent;
- (void).cxx_destruct;

@end
