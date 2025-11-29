@class NSOperation, NSDate;
@protocol AMapComponent;

@interface AMapRequestLoggerItem : NSObject

@property (retain, nonatomic) id<AMapComponent> component;
@property (retain, nonatomic) NSOperation *operation;
@property (retain, nonatomic) NSDate *beginTime;
@property (retain, nonatomic) NSDate *endTime;
@property (nonatomic) BOOL needReport;

- (void).cxx_destruct;

@end
