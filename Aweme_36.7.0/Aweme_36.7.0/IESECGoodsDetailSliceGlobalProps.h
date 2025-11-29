@class NSMutableDictionary;

@interface IESECGoodsDetailSliceGlobalProps : NSObject

@property (retain, nonatomic) NSMutableDictionary *globalProps;

- (id)mergeGlobalData:(id)a0;
- (void)setupGlobalProps:(id)a0;
- (void)appendGlobalDataFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)updateWithAction:(id)a0;

@end
