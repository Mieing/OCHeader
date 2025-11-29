@class NSString, NSMutableArray;

@interface AWEFeedPrecisionDowngradeErrorData : NSObject

@property (retain, nonatomic) NSString *imprID;
@property (retain, nonatomic) NSMutableArray *errorCodeArray;
@property (nonatomic) double occurTime;
@property (retain, nonatomic) NSString *provider;

- (id)initWithErrorInfo:(id)a0 timestamp:(double)a1 provider:(id)a2 imprId:(id)a3;
- (void)addErrorCode:(id)a0 timestamp:(double)a1;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
