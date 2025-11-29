@class NSString, NSDictionary;

@interface IESECListKitItemAdActionDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSDictionary *adExtraData;
@property (nonatomic) BOOL reportThirdTrack;
@property (nonatomic) BOOL isClickEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
