@class NSString, NSMutableDictionary;

@interface AWEUserRecommendViewProvider : HTSService <AWEUserRecommendViewProvider>

@property (retain, nonatomic) NSMutableDictionary *cellViewClasses;
@property (retain, nonatomic) NSMutableDictionary *cardCellViewClasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)cardCellViewClassForType:(long long)a0;
- (void)registerCardCellViewClass:(Class)a0 forType:(long long)a1;
- (Class)cellViewClassForType:(long long)a0;
- (void)registerCellViewClass:(Class)a0 forType:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (Class)footerViewClass;
- (Class)headerViewClass;

@end
