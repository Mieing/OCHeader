@class NSString;

@interface AWECommentLabelModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *color;
@property (readonly, copy, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
