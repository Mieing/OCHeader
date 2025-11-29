@class NSString;

@interface WCSGroupClickWrap : NSObject <PBCoding>

@property (nonatomic) unsigned int day;
@property (nonatomic) unsigned int clickCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_day;
+ (void)PBArrayAdd_clickCount;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
