@class NSMutableDictionary, IESLiveComponentOrderConfig, NSMutableArray;

@interface IESLiveComponentOrderProvider : NSObject

@property (retain, nonatomic) IESLiveComponentOrderConfig *orderConfig;
@property (nonatomic) BOOL valid;
@property (retain, nonatomic) NSMutableArray *p0OrderList;
@property (retain, nonatomic) NSMutableArray *p1OrderList;
@property (retain, nonatomic) NSMutableArray *p2OrderList;
@property (retain, nonatomic) NSMutableArray *p3OrderList;
@property (retain, nonatomic) NSMutableDictionary *p0Group;
@property (retain, nonatomic) NSMutableDictionary *p1Group;
@property (retain, nonatomic) NSMutableDictionary *p2Group;
@property (retain, nonatomic) NSMutableDictionary *p3Group;
@property (retain, nonatomic) NSMutableArray *p0GroupArray;
@property (retain, nonatomic) NSMutableArray *p1GroupArray;
@property (retain, nonatomic) NSMutableArray *p2GroupArray;
@property (retain, nonatomic) NSMutableArray *p3GroupArray;

- (void)updateOrderConfig:(id)a0;
- (id)levelInSinglePriorityWithName:(id)a0;
- (id)levelInGroupListWithName:(id)a0;
- (id)buildAndSortLevel:(long long)a0 components:(id)a1;
- (id)orderListWithLevel:(long long)a0 orderObject:(Class)a1;
- (id)groupWithLevel:(long long)a0;
- (id)groupArrayWithLevel:(long long)a0;
- (void)removeRepetitionWithLevel:(long long)a0;
- (void)buildOrderListAndGroupWithLevel:(long long)a0;
- (id)orderListWithLevel:(long long)a0;
- (void)removeCompName:(id)a0 level:(long long)a1;
- (id)reOrderComponents:(id)a0 level:(long long)a1 group:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
