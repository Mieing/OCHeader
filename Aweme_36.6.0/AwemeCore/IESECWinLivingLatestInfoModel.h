@class NSString;

@interface IESECWinLivingLatestInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *webcastInfo;
@property (copy, nonatomic) NSString *audienceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
