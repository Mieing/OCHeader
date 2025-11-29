@class NSString;

@interface AWEAwemeControlModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL canForward;
@property (nonatomic) BOOL canShare;
@property (nonatomic) BOOL canComment;
@property (nonatomic) BOOL canShowComment;
@property (nonatomic) BOOL cannotCollect;
@property (nonatomic) BOOL cannotDigg;
@property (readonly, nonatomic) BOOL disableForward;
@property (readonly, nonatomic) BOOL disableShare;
@property (readonly, nonatomic) BOOL disableComment;
@property (readonly, nonatomic) BOOL disableShowComment;
@property (readonly, nonatomic) BOOL disableCollect;
@property (readonly, nonatomic) BOOL disableDigg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)disableForward;
- (BOOL)disableShare;
- (BOOL)disableComment;
- (BOOL)disableShowComment;
- (BOOL)disableDigg;
- (BOOL)disableCollect;

@end
