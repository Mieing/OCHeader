@class NSString, NSMutableArray, NSMutableDictionary;

@interface ZZNPAopModel : NSObject

@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long eventCount;
@property (retain, nonatomic) NSMutableArray *eventList;
@property (retain, nonatomic) NSMutableDictionary *eventMap;

+ (id)createWithName:(id)a0;

- (id)init;
- (void)addEventAction:(id)a0 tag:(id)a1;
- (void)removeEventByTag:(id)a0;
- (void)executeWithInstance:(id)a0;
- (void).cxx_destruct;

@end
