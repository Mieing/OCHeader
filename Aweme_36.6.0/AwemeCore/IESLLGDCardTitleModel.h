@class NSString;

@interface IESLLGDCardTitleModel : MTLModel <MTLJSONSerializing, IESLLGDComponentWrapperProtocol>

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL needAnim;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long marginTop;
@property (nonatomic) long long marginBottom;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
