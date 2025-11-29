@class NSString, NSArray;

@interface DYCommonVerifyModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *verifyTicket;
@property (nonatomic) BOOL needShowVerifyTab;
@property (copy, nonatomic) NSString *verifySceneDesc;
@property (retain, nonatomic) NSArray *verifyWays;
@property (nonatomic) BOOL isOptionalVerify;
@property (copy, nonatomic) NSString *profileKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
