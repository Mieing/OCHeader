@class NSString, NSObject;
@protocol IZZReactive;

@interface ZZPropertyObserver : NSObject <IZZReactive>

@property (copy, nonatomic) id /* block */ nextAction;
@property (copy, nonatomic) id /* block */ filterAction;
@property (retain, nonatomic) id mapAction;
@property (retain, nonatomic) NSString *tag;
@property (copy, nonatomic) id removeObserverAction;
@property (nonatomic) void *data;
@property (weak, nonatomic) ZZPropertyObserver *prePO;
@property (retain, nonatomic) ZZPropertyObserver *nextPO;
@property (readonly, weak, nonatomic) id instance;
@property (readonly, nonatomic) NSString *propertyName;
@property (copy, nonatomic) id /* block */ map;
@property (copy, nonatomic) id /* block */ filter;
@property (copy, nonatomic) id /* block */ next;
@property (readonly, copy, nonatomic) id /* block */ observerProperty;
@property (readonly, weak, nonatomic) NSObject<IZZReactive> *headPO;
@property (readonly, nonatomic) NSObject<IZZReactive> *install;
@property (readonly, nonatomic) NSObject<IZZReactive> *fire;
@property (readonly, nonatomic) NSObject<IZZReactive> *installAndFire;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithInstance:(id)a0 propertyName:(id)a1;

- (id)initWithInstance:(id)a0 propertyName:(id)a1;
- (void)dealloc;
- (void)regetDataIfNeed;
- (void)resetObserverIfNeed;
- (void)addObserver:(id)a0;
- (void)removeObserver;
- (void)notiValueChanged;
- (void)getReturnValue:(void *)a0;
- (id)getIDRetrunValue;
- (void)setPropertyValue:(void *)a0;
- (void)setIDPropertyValue:(id)a0;
- (id)target;
- (void).cxx_destruct;

@end
