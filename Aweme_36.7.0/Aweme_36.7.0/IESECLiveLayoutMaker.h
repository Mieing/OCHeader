@class NSDictionary;

@interface IESECLiveLayoutMaker : NSObject

@property (retain, nonatomic) NSDictionary *nameToViewDic;

- (void)makeLayoutWithModel:(id)a0 nameToViewDic:(id)a1;
- (void)makeElementLayoutWithModel:(id)a0 elementView:(id)a1;
- (void)makeElementDesignWithModel:(id)a0 elementView:(id)a1;
- (double)p_constraintOffset:(id)a0;
- (id)elementViewWithName:(id)a0;
- (void)makeLayoutWithDict:(id)a0 nameToViewDic:(id)a1;
- (void)makeLayoutWithModelArray:(id)a0 nameToViewDic:(id)a1;
- (void).cxx_destruct;

@end
