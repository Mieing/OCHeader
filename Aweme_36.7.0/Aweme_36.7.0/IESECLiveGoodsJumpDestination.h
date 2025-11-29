@class NSString;

@interface IESECLiveGoodsJumpDestination : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long blankJumpDestination;
@property (nonatomic) long long buttonJumpDestination;
@property (nonatomic) BOOL skipCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
