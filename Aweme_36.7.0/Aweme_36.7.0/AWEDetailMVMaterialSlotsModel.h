@class NSArray;

@interface AWEDetailMVMaterialSlotsModel : NSObject

@property (nonatomic) long long duration;
@property (nonatomic) long long minSlotsNumnber;
@property (nonatomic) BOOL containsAIGCAvatar;
@property (copy, nonatomic) NSArray *cellModels;

+ (id)formatedDurationMS:(unsigned long long)a0;

- (id)fragmentDescription;
- (void).cxx_destruct;
- (id)description;
- (id)durationDescription;

@end
