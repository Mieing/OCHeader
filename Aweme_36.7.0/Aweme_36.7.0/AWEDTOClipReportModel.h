@class NSString;

@interface AWEDTOClipReportModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *recordLocation;
@property (nonatomic) long long countDownType;
@property (copy, nonatomic) NSString *countDownByHand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
