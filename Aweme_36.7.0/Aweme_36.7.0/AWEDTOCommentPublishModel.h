@class NSString;

@interface AWEDTOCommentPublishModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imageCommentId;
@property (copy, nonatomic) NSString *commentItemId;
@property (copy, nonatomic) NSString *commentItemUserId;
@property (nonatomic) long long imageCommentVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
