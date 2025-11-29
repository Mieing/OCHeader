@class NSString;

@interface WCObjectOperation : NSObject <NSCoding, PBCoding>

@property (nonatomic) int snsOperateFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_snsOperateFlag;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
