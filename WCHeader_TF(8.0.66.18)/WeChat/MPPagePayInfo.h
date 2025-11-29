@class NSString;

@interface MPPagePayInfo : MMObject <PBCoding>

@property (nonatomic) BOOL isPaid;
@property (copy, nonatomic) NSString *friendPayCountStr;
@property (nonatomic) BOOL isPaySubscribe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_isPaid;
+ (void)PBArrayAdd_isPaySubscribe;
+ (void)PBArrayAdd_friendPayCountStr;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
