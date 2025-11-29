@class NSNumber;

@interface AWEECommerceSwiftImpl.AWEECMarkAnchorSettingsConfigCommentPageModel : MTLModel <MTLJSONSerializing>

@property (nonatomic, retain) NSNumber *commentCountPerRequest;
@property (nonatomic, retain) NSNumber *enableSwitchingTabOnPostingNewComment;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
