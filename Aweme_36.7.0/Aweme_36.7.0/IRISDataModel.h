@class IRISDataModelContext;

@interface IRISDataModel : NSObject

@property (weak, nonatomic) IRISDataModelContext *context;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
