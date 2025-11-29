@protocol ACCSideslipPropBaseCellUIConfigProtocol;

@interface ACCSideslipPropBaseCellUIConfigHelper : NSObject

@property (retain, nonatomic) id<ACCSideslipPropBaseCellUIConfigProtocol> defaultUIConfig;

+ (id)shareInstance;

- (void)configBaseUIConfigWithCellModel:(id)a0 forCell:(id)a1;
- (void).cxx_destruct;

@end
