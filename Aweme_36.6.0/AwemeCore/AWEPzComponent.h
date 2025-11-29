@class NSMutableDictionary, NSString, NSSet, AWEPzComponentModel, AWEPzComponentConfigModel, AWEPzEngine, AWEPzComponentRecordModel;

@interface AWEPzComponent : NSObject <AWEPzComponentProtocol> {
    struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; } *_rwlock;
}

@property (copy, nonatomic) NSString *domainName;
@property (readonly, nonatomic) long long state;
@property (readonly, copy, nonatomic) NSString *componentID;
@property (readonly, copy, nonatomic) NSSet *cTags;
@property (readonly, nonatomic) id attachment;
@property (readonly, copy, nonatomic) NSString *componentType;
@property (readonly, copy, nonatomic) NSSet *sTags;
@property (readonly, nonatomic) AWEPzComponentModel *model;
@property (readonly, nonatomic) BOOL needRecord;
@property (readonly, nonatomic) AWEPzComponentConfigModel *config;
@property (readonly, nonatomic) BOOL consumed;
@property (readonly, weak, nonatomic) AWEPzEngine *engine;
@property (readonly, nonatomic) AWEPzComponentRecordModel *recordModel;
@property (readonly, nonatomic) double lastShowTime;
@property (retain, nonatomic) NSMutableDictionary *dynamicStrategyMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEngine:(id)a0 config:(id)a1;
- (void)setupWithModel:(id)a0 needRecord:(BOOL)a1;
- (void)updateConsumed:(BOOL)a0;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)remove;
- (void)hide;
- (void)add;
- (void)reset;
- (void)consume;
- (void)dealloc;
- (void)show;

@end
