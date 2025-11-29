@class NSArray, NSMutableDictionary;

@interface IESECommerceGoodsDetailSectionManager : NSObject

@property (retain, nonatomic) NSArray *showSectionNames;
@property (retain, nonatomic) NSArray *showModuleNames;
@property (retain, nonatomic) NSArray *fullSectionOrder;
@property (retain, nonatomic) NSArray *fullModuleNameOrder;
@property (retain, nonatomic) NSMutableDictionary *moduleNameFor;
@property (retain, nonatomic) NSMutableDictionary *sectionFor;
@property (retain, nonatomic) NSMutableDictionary *sectionShowMap;

- (id)initWithModuleNameOrder:(id)a0;
- (void)prepareOrderWith:(id)a0;
- (void)bindSection:(long long)a0 withModule:(id)a1;
- (void)orderSection:(long long)a0 withModule:(id)a1;
- (id)sectionFor:(id)a0;
- (id)mfullSectionOrder;
- (id)mfullModuleNameOrder;
- (id)moduleNameFor:(long long)a0;
- (void)startGeneratingSectionOrder;
- (void)hidenSection:(long long)a0;
- (void)showSection:(long long)a0;
- (void)hidenModule:(id)a0;
- (void)showModule:(id)a0;
- (id)endGeneratingSectionOrder;
- (id)isShowSection:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
