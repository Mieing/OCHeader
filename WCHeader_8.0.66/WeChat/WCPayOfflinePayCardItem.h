@class NSString;

@interface WCPayOfflinePayCardItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *bankType;
@property (retain, nonatomic) NSString *bindSerial;
@property (nonatomic) long long cardId;
@property (retain, nonatomic) NSString *forbidWord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_bankType;
+ (void)PBArrayAdd_bindSerial;
+ (void)PBArrayAdd_cardId;
+ (void)PBArrayAdd_forbidWord;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
