@class NSString;

@interface WCWidgetEventItem : MMObject <PBCoding>

@property (nonatomic) long long eventType;
@property (nonatomic) long long eventSubType;
@property (retain, nonatomic) NSString *widgetName;
@property (retain, nonatomic) NSString *widgetIdentify;
@property (retain, nonatomic) NSString *action;
@property (nonatomic) struct CGPoint { double x; double y; } touchBeginPoint;
@property (nonatomic) struct CGPoint { double x; double y; } touchEndPoint;
@property (nonatomic) unsigned int touchInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_eventType;
+ (void)PBArrayAdd_eventSubType;
+ (void)PBArrayAdd_widgetName;
+ (void)PBArrayAdd_widgetIdentify;
+ (void)PBArrayAdd_action;
+ (void)PBArrayAdd_touchBeginPoint;
+ (void)PBArrayAdd_touchEndPoint;
+ (void)PBArrayAdd_touchInterval;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)getWidgeName;
- (id)getTouchBeginPoint;
- (id)getTouchEndPoint;
- (id)formatPointToIntString:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
