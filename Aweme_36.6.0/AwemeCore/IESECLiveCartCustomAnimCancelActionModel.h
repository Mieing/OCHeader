@class NSString;

@interface IESECLiveCartCustomAnimCancelActionModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long actionType;
@property (nonatomic) BOOL isSingleRoom;
@property (nonatomic) long long period;
@property (nonatomic) BOOL isNaturalTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
