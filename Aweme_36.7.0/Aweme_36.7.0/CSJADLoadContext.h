@class CSJMaterialMeta, CSJADLoadDurationModel, CSJAdSlot;

@interface CSJADLoadContext : NSObject

@property (retain, nonatomic) CSJAdSlot *slot;
@property (retain, nonatomic) CSJMaterialMeta *material;
@property (retain, nonatomic) CSJADLoadDurationModel *loadDurationModel;

- (void).cxx_destruct;

@end
