@class NSArray, NSString, IESLLGDPointSelectedInfo, IESLLGDPointComment, IESLLGDPointExplain;

@interface IESLLGDPointData : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLGDPointExplain *explain;
@property (retain, nonatomic) IESLLGDPointComment *comment;
@property (retain, nonatomic) IESLLGDPointSelectedInfo *selected_info;
@property (retain, nonatomic) NSArray *marquee;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)marqueeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
