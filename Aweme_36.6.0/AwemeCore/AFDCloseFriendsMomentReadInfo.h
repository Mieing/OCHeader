@class NSString;

@interface AFDCloseFriendsMomentReadInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long UID;
@property (nonatomic) long long latestMomentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)UIDStringValue;

@end
