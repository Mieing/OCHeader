@interface MMLiveFlowFanoutResultItem : NSObject

@property (nonatomic) BOOL succeeded;
@property (retain, nonatomic) id input;
@property (retain, nonatomic) id result;

- (void).cxx_destruct;

@end
