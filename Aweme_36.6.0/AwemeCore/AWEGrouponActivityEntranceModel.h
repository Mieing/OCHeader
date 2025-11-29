@class AWEGrouponResourceOfCommonData, NSString;

@interface AWEGrouponActivityEntranceModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGrouponResourceOfCommonData *commonData;
@property (copy, nonatomic) NSString *layoutConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
