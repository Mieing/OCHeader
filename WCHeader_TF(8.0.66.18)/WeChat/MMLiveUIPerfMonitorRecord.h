@class NSString;

@interface MMLiveUIPerfMonitorRecord : NSObject

@property (retain, nonatomic) NSString *uniqueKey;
@property (retain, nonatomic) NSString *recordDesc;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } composeRect;
@property (nonatomic) double composeSizePercent;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) id /* block */ composeRectUpdateNotifyCallback;

+ (id)getMonitorObjKey:(id)a0;
+ (BOOL)isRectArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 largerThan:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void)initDefaultDatas;
- (void)updateComposeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateComposeSizePercent:(double)a0;
- (BOOL)startMonitorIfNeed;
- (BOOL)stopMonitorIfNeed;
- (BOOL)isValid;
- (void)clear;
- (id)description;
- (id)getRecordDesc;
- (id)getUniqueKey;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currPresentFrame;
- (id)rootView;
- (void).cxx_destruct;

@end
