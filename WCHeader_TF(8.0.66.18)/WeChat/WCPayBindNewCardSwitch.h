@class NSString;

@interface WCPayBindNewCardSwitch : NSObject <PBCoding>

@property (nonatomic) long long forbid_bind_card;
@property (copy, nonatomic) NSString *forbid_word;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_forbid_bind_card;
+ (void)PBArrayAdd_forbid_word;
+ (void)initialize;
+ (id)GenFromDictionary:(id)a0;

- (id)getPBPropertyTable;
- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
