@class NSString;

@interface MJTemplateDynamicInfo : NSObject <PBCoding, NSCopying>

@property (nonatomic) unsigned long long postCount;
@property (nonatomic) unsigned long long favFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_postCount;
+ (void)PBArrayAdd_favFlag;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithDycamicInfo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
