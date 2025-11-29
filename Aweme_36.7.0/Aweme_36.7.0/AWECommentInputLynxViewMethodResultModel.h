@class NSDictionary, NSString;

@interface AWECommentInputLynxViewMethodResultModel : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *commentModel;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
