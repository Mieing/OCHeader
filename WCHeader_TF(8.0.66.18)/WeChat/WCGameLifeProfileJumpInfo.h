@class NSString;

@interface WCGameLifeProfileJumpInfo : NSObject <PBCoding, WCTColumnCoding>

@property (copy, nonatomic) NSString *jumpUrl;
@property (nonatomic) unsigned int jumpType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_jumpUrl;
+ (void)PBArrayAdd_jumpType;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

@end
