@class NSString, NSDictionary;

@interface IESECDLDynamicViewRenderModel : IESECDLBaseRenderModel

@property (copy, nonatomic) NSString *layoutType;
@property (copy, nonatomic) NSDictionary *renderDataGroup;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
