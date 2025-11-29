@class NSString, NSDictionary;

@interface TSCENTERDeviceDataReportRequest : NSObject

@property (retain, nonatomic) NSString *os;
@property (retain, nonatomic) NSString *apdid;
@property (retain, nonatomic) NSString *pubApdid;
@property (retain, nonatomic) NSString *priApdid;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *umidToken;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *lastTime;
@property (retain, nonatomic) NSDictionary *dataMap;

+ (Class)dataMapElementClass;

- (void).cxx_destruct;

@end
