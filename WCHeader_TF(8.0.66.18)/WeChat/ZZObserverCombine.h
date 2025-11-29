@class NSArray, NSString, NSObject;
@protocol IZZReactive;

@interface ZZObserverCombine : NSObject <IZZReactive>

@property (copy, nonatomic) id /* block */ nextAction;
@property (copy, nonatomic) id /* block */ filterAction;
@property (retain, nonatomic) id mapAction;
@property (retain, nonatomic) NSArray *poList;
@property (copy, nonatomic) id /* block */ map;
@property (copy, nonatomic) id /* block */ filter;
@property (copy, nonatomic) id /* block */ next;
@property (readonly, weak, nonatomic) NSObject<IZZReactive> *headPO;
@property (readonly, nonatomic) NSObject<IZZReactive> *install;
@property (readonly, nonatomic) NSObject<IZZReactive> *fire;
@property (readonly, nonatomic) NSObject<IZZReactive> *installAndFire;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithPOList:(id)a0 mapAction:(id)a1;

- (void)getReturnValue:(void *)a0;
- (id)getIDRetrunValue;
- (void).cxx_destruct;

@end
