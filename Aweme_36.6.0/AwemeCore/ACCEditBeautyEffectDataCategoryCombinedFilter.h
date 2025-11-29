@class NSString;

@interface ACCEditBeautyEffectDataCategoryCombinedFilter : NSObject <ACCEditBeautyEffectDataFilterProtocol>

@property (copy, nonatomic) NSString *region;
@property (nonatomic) long long abGroup;
@property (nonatomic) long long gender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataFilterConfig:(id)a0;
- (void).cxx_destruct;
- (id)filter:(id)a0;

@end
