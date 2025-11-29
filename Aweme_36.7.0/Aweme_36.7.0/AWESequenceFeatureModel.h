@class NSString, NSMutableDictionary;

@interface AWESequenceFeatureModel : AWEBaseFeatureModel <BDModelCustom>

@property (nonatomic) long long is_dup;
@property (nonatomic) long long itemStatus;
@property (retain, nonatomic) NSMutableDictionary *custom;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelPropertyBlacklist;
+ (id)internalFeatures;

@end
