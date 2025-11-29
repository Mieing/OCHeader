@class NSString;

@interface ACCEditBeautyEffectDataCategoryABGroupFilter : NSObject <ACCEditBeautyEffectDataFilterProtocol>

@property (nonatomic) long long abGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)getABGroupValueCategory:(id)a0;
- (id)initWithABGroup:(long long)a0;
- (id)filter:(id)a0;

@end
