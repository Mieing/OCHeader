@class NSString;

@interface AWEPzStrategyRegisterModel : NSObject

@property (retain, nonatomic) Class strategyClass;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL needConsumePzDBRecord;
@property (nonatomic) BOOL canSubThreadExecute;

- (void).cxx_destruct;

@end
