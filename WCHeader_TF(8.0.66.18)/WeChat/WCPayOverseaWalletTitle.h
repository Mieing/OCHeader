@class NSData, NSString;

@interface WCPayOverseaWalletTitle : NSObject <PBCoding>

@property (retain, nonatomic) NSData *main;
@property (retain, nonatomic) NSData *sub;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_main;
+ (void)PBArrayAdd_sub;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
