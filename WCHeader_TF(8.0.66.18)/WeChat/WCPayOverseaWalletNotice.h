@class NSData, NSString;

@interface WCPayOverseaWalletNotice : NSObject <PBCoding>

@property (retain, nonatomic) NSData *conent;
@property (retain, nonatomic) NSData *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_conent;
+ (void)PBArrayAdd_url;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
