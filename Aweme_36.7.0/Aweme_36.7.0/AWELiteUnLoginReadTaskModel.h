@class NSString;

@interface AWELiteUnLoginReadTaskModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long loopStatus;
@property (nonatomic) long long pendantJumpToTaskPage;
@property (nonatomic) BOOL loopTomorrow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
