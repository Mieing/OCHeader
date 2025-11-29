@class NSString, NSNumber, NSDictionary;

@interface IESLatchMonitorTemplate : NSObject

@property (copy, nonatomic) NSString *business;
@property (weak, nonatomic) id lynxView;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSNumber *stage;
@property (copy, nonatomic) NSNumber *optimizeType;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSString *errorMessage;
@property (copy, nonatomic) NSDictionary *errorExtra;

- (void).cxx_destruct;

@end
