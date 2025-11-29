@class NSString;

@interface GameCenterLabelInfo : MMObject <PBCoding>

@property (retain, nonatomic) NSString *labelName;
@property (retain, nonatomic) NSString *labelBgColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_labelName;
+ (void)PBArrayAdd_labelBgColor;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
