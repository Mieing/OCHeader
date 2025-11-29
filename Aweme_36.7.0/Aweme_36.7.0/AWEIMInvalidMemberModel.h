@class NSString, NSNumber;

@interface AWEIMInvalidMemberModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *secUserID;
@property (retain, nonatomic) NSNumber *userID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
