@class NSArray, NSString;

@interface WCPayOfflinePayCardList : NSObject <PBCoding>

@property (retain, nonatomic) NSArray *cardList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_cardList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
