@class NSString;

@interface BTAdValidExposeConfig : NSObject <PBCoding>

@property (nonatomic) double ratio;
@property (nonatomic) double time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_ratio;
+ (void)PBArrayAdd_time;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
