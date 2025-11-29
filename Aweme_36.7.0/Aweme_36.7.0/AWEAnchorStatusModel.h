@class NSString;

@interface AWEAnchorStatusModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long isNormalUI;
@property (nonatomic) long long isNormalTrack;
@property (nonatomic) long long isNormalJump;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
