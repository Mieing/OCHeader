@class NSString;

@interface IESLLGDSimpleContentModel : MTLModel <MTLJSONSerializing, IESLLGDComponentWrapperProtocol>

@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL needDot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long marginTop;
@property (nonatomic) long long marginBottom;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
