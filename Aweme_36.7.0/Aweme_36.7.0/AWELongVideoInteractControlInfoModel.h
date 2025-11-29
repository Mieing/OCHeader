@class NSString;

@interface AWELongVideoInteractControlInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL canShare;
@property (nonatomic) BOOL canCollect;
@property (nonatomic) BOOL canComment;
@property (nonatomic) BOOL canDigg;
@property (copy, nonatomic) NSString *noShareReason;
@property (copy, nonatomic) NSString *noCollectReason;
@property (copy, nonatomic) NSString *noCommentReason;
@property (copy, nonatomic) NSString *noDiggReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
