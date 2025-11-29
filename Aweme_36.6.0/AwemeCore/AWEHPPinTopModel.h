@protocol AWEHPPinTopDataModelProtocol;

@interface AWEHPPinTopModel : AWEHPBaseComponentModel

@property (retain, nonatomic) id<AWEHPPinTopDataModelProtocol> dataModel;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
