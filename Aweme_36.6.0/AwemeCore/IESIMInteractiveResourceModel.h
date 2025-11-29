@interface IESIMInteractiveResourceModel : AWEIMEmoticonModel

@property (nonatomic) long long visibleStartTime;
@property (nonatomic) long long visibleEndTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void)syncPropertiesToModel:(id)a0;
- (BOOL)isVisibleAtTime:(double)a0;
- (id)init;

@end
