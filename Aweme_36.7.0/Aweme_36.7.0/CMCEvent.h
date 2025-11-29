@class CMCContext, NSString, CMCScene;

@interface CMCEvent : CMCObject

@property (nonatomic) BOOL saveAsRecord;
@property (nonatomic) BOOL clearRecordWhenFirstAccess;
@property (retain, nonatomic) CMCContext *context;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL saveAsRecord;
@property (nonatomic) BOOL clearRecordWhenFirstAccess;
@property (readonly, nonatomic) NSString *ID;
@property (readonly, weak, nonatomic) CMCScene *scene;

+ (id)adEventOccurredWithName:(id)a0 aweme:(id)a1;
+ (id)adEventOccurredWithName:(id)a0 contextBuilder:(id /* block */)a1;
+ (id)eventOccurredWithName:(id)a0 info:(id)a1;
+ (id)eventOccurredWithName:(id)a0;
+ (id)eventOccurredWithName:(id)a0 contextBuilder:(id /* block */)a1;

- (id)initWithName:(id)a0 inScene:(id)a1;
- (void)willOccurWithContext:(id)a0;
- (void)didOccurWithContext:(id)a0;
- (void)occurWithContext:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithName:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
