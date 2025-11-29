@class NSString;

@interface AWEUserCAccountUserInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showCooperationCode;
@property (copy, nonatomic) NSString *cooperationCodeSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
