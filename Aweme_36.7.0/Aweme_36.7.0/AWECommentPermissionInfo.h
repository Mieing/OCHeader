@class NSString;

@interface AWECommentPermissionInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long commentPermissionStatus;
@property (nonatomic) BOOL canComment;
@property (nonatomic) BOOL itemDetailEntry;
@property (nonatomic) BOOL pressEntry;
@property (nonatomic) BOOL toastGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commentPermissionStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;


@end
