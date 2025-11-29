@class NSOperation, NSDate;
@protocol AMapComponent;

@interface MAMapRequestLoggerItem : NSObject

@property (retain, nonatomic) id<AMapComponent> component;
@property (retain, nonatomic) NSOperation *operation;
@property (retain, nonatomic) NSDate *beginTime;
@property (retain, nonatomic) NSDate *endTime;

- (void).cxx_destruct;

@end
