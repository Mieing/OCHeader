@class NSArray, NSString;

@interface BDWebImageAuthorizationConfig : NSObject <BDModelCustom>

@property (copy, nonatomic) NSArray *webAuthCodes;
@property (nonatomic) unsigned long long authorizationConfigTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
