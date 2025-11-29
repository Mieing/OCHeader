@class NSDictionary, NSString;

@interface ACCEffectTrackParams : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL needTrackInEdit;
@property (nonatomic) BOOL needTrackInPublish;
@property (copy, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
