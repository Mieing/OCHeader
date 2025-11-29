@class NSString, NSNumber;

@interface IESECCommentExtendTagModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tagCode;
@property (retain, nonatomic) NSNumber *count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
