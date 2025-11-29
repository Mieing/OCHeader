@class NSData, NSString;

@interface WCPayOverseaThreePointAreaItem : NSObject <PBCoding>

@property (retain, nonatomic) NSData *name;
@property (retain, nonatomic) NSData *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_url;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
