@class NSString, NSMutableArray, AWELivePreStreamElementGroup;

@interface AWELivePreStreamConfigCenter : NSObject

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSMutableArray *elementList;
@property (retain, nonatomic) AWELivePreStreamElementGroup *elementGroup;

- (void)setupReferString:(id)a0;
- (id)livePreStreamElementsInContainer:(id)a0;
- (unsigned long long)convertlivePreStreamScene:(id)a0;
- (void)p_addElement:(id)a0 toContainer:(id)a1;
- (void)p_deleteElement:(id)a0 fromContainer:(id)a1;
- (id)p_elementFullName:(id)a0;
- (id)livePreStreamContainer;
- (void).cxx_destruct;
- (id)initWithScene:(id)a0;

@end
