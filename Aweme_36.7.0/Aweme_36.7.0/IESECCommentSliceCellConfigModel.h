@class NSNumber, NSString;

@interface IESECCommentSliceCellConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
