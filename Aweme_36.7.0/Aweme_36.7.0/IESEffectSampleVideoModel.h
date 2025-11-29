@class NSNumber, IESEffectURLModel, NSString;

@interface IESEffectSampleVideoModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) IESEffectURLModel *coverURL;
@property (readonly, copy, nonatomic) IESEffectURLModel *playURL;
@property (readonly, copy, nonatomic) IESEffectURLModel *h264URL;
@property (readonly, copy, nonatomic) IESEffectURLModel *downloadURL;
@property (readonly, copy, nonatomic) IESEffectURLModel *dynamicCover;
@property (readonly, copy, nonatomic) NSNumber *height;
@property (readonly, copy, nonatomic) NSNumber *width;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
