@class NSString, PersonalDesigner;

@interface DesignerInfoObj : MMObject <PBCoding, NSCopying>

@property (nonatomic) unsigned long long updateTime;
@property (retain, nonatomic) PersonalDesigner *designer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_designer;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
