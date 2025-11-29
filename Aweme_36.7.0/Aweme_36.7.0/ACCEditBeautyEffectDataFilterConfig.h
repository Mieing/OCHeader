@class NSString;

@interface ACCEditBeautyEffectDataFilterConfig : NSObject

@property (copy, nonatomic) NSString *region;
@property (nonatomic) long long abGroup;
@property (nonatomic) long long gender;
@property (nonatomic) BOOL shouldUseComposerParams;

- (void).cxx_destruct;
- (id)init;

@end
