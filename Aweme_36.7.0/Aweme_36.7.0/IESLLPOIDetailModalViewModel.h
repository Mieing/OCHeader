@class NSString;

@interface IESLLPOIDetailModalViewModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long style;
@property (nonatomic) double modalViewRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
