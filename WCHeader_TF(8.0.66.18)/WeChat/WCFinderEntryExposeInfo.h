@class NSString;

@interface WCFinderEntryExposeInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *path;
@property (nonatomic) unsigned long long businessType;
@property (copy, nonatomic) NSString *redDotId;
@property (nonatomic) BOOL isIgnore;
@property (nonatomic) BOOL isExemptNMControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_redDotId;
+ (void)PBArrayAdd_isIgnore;
+ (void)PBArrayAdd_isExemptNMControl;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithPath:(id)a0 businessType:(unsigned long long)a1 redDotId:(id)a2 isIgnore:(BOOL)a3 isExemptNMControl:(BOOL)a4;
- (BOOL)redDotHasExpose;
- (BOOL)isIgnoreFrequency;
- (void).cxx_destruct;

@end
