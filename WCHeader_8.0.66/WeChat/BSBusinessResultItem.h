@class BSBusinessProductItem, BSBusinessContactItem, BSBusinessCommonItem;

@interface BSBusinessResultItem : NSObject

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned long long docId;
@property (retain, nonatomic) BSBusinessContactItem *contactItem;
@property (retain, nonatomic) BSBusinessCommonItem *commonItem;
@property (retain, nonatomic) BSBusinessProductItem *productItem;

+ (id)fromServerObj:(id)a0;

- (void).cxx_destruct;

@end
