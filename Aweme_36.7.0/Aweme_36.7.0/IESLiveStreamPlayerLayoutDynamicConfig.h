@class IESLiveStreamPlayerLayoutAlignModeWrapper, NSString, IESLiveStreamPlayerLayoutContentFrame;

@interface IESLiveStreamPlayerLayoutDynamicConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLiveStreamPlayerLayoutContentFrame *contentFrame;
@property (nonatomic) long long topAvoidType;
@property (nonatomic) long long bottomAvoidType;
@property (nonatomic) long long scaleType;
@property (retain, nonatomic) IESLiveStreamPlayerLayoutAlignModeWrapper *big;
@property (retain, nonatomic) IESLiveStreamPlayerLayoutAlignModeWrapper *small;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentFrameJSONTransformer;
+ (id)bigJSONTransformer;
+ (id)smallJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)configWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
