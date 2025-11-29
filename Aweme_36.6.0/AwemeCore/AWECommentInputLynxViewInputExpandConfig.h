@class NSArray, NSString;

@interface AWECommentInputLynxViewInputExpandConfig : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *expandTitle;
@property (copy, nonatomic) NSArray *expandSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
