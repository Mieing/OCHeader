@class NSString, NSArray;

@interface WCPayLQTPurchaseCgiBottomItemCache : NSObject <PBCoding>

@property (nonatomic) BOOL autoPullUpKeyboard;
@property (nonatomic) BOOL isShowProtocol;
@property (nonatomic) BOOL isProtoclDefaultChecked;
@property (retain, nonatomic) NSString *bottomWording;
@property (retain, nonatomic) NSString *bottomTipsWording;
@property (retain, nonatomic) NSArray *protocolList;
@property (retain, nonatomic) NSArray *hintOfKeyboard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_autoPullUpKeyboard;
+ (void)PBArrayAdd_isShowProtocol;
+ (void)PBArrayAdd_isProtoclDefaultChecked;
+ (void)PBArrayAdd_bottomWording;
+ (void)PBArrayAdd_bottomTipsWording;
+ (void)PBArrayAdd_protocolList;
+ (void)PBArrayAdd_hintOfKeyboard;
+ (void)initialize;
+ (id)getBottomItemCacheWithEntranceType:(unsigned int)a0;
+ (BOOL)saveBottomItemCache:(id)a0 withEntranceType:(unsigned int)a1;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
