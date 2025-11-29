@class AWEGrouponResourceOfCommonData, NSString;

@interface AWEGrouponResourceOfPendantModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGrouponResourceOfCommonData *commonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
