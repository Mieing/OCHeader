@class NSMutableDictionary;

@interface IESECSliceXElementViewStorage : NSObject

@property (retain, nonatomic) NSMutableDictionary *storageMap;

- (id)getValueWithUniqueID:(id)a0 elementID:(id)a1;
- (void)setValue:(id)a0 withUniqueID:(id)a1 elementID:(id)a2;
- (void).cxx_destruct;

@end
