@class NSString;

@interface IESLLPOICommentExpModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *expName;
@property (nonatomic) long long expGroup;
@property (readonly, nonatomic) BOOL isFullCommentPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
