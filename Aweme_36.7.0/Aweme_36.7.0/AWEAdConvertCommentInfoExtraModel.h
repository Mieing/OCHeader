@class NSString;

@interface AWEAdConvertCommentInfoExtraModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
