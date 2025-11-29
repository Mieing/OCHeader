@class NSNumber, NSString;

@interface NHAccountUserConnectedPlatform : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *userID;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *screenName;
@property (retain, nonatomic) NSString *imageURLString;
@property (retain, nonatomic) NSNumber *expiredIn;
@property (retain, nonatomic) NSNumber *expiredTime;
@property (retain, nonatomic) NSString *accessToken;
@property (readonly, nonatomic) unsigned long long platformEnumValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
