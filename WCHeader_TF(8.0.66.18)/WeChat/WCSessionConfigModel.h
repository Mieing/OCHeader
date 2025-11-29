@class NSString, NSMutableArray;

@interface WCSessionConfigModel : MMObject <PBCoding>

@property (retain, nonatomic) NSString *sid;
@property (retain, nonatomic) NSMutableArray *pageNames;
@property (retain, nonatomic) NSString *prePage;
@property (retain, nonatomic) NSMutableArray *sessionParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_sid;
+ (void)PBArrayAdd_pageNames;
+ (void)PBArrayAdd_prePage;
+ (void)PBArrayAdd_sessionParams;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)initWithSid:(id)a0 withPageNames:(id)a1 withPrePage:(id)a2;
- (id)toString;
- (void).cxx_destruct;

@end
