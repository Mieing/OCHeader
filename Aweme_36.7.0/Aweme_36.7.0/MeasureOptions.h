@class NSNumber, NSMutableArray;

@interface MeasureOptions : NSObject

@property (retain, nonatomic) NSNumber *showContent;
@property (retain, nonatomic) NSNumber *maxWidth;
@property (retain, nonatomic) NSMutableArray *textModifierIds;
@property (retain, nonatomic) NSMutableArray *attributeKeys;
@property (retain, nonatomic) NSMutableArray *attributeValues;

- (id)initWithShowContent:(id)a0 maxWidth:(id)a1 textModifierIds:(id)a2 attributeKeys:(id)a3 attributeValues:(id)a4;
- (void).cxx_destruct;

@end
