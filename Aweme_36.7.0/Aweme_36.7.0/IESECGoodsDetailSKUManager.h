@class NSArray, NSNumber, NSString;

@interface IESECGoodsDetailSKUManager : NSObject

@property (copy, nonatomic) NSArray *skuSpecInfo;
@property (copy, nonatomic) NSNumber *count;
@property (copy, nonatomic) NSString *pageIdentifier;

- (id)initWithPageIdentifier:(id)a0;
- (id)getSelectedSpecIDs;
- (void)updateSKUSelectedInfoWithSpecIDArray:(id)a0;
- (void)updateSpecInfoWithCommonMeta:(id)a0;
- (void)updateSKUSelectedInfoWithIndexArray:(id)a0;
- (id)getDefaultSpecNames;
- (id)getSelectedSpecNames;
- (id)getSelectedSpecIndexs;
- (void).cxx_destruct;

@end
