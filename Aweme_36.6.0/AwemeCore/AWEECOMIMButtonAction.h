@class NSString;

@interface AWEECOMIMButtonAction : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *actionExtraInfo;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *skuURLString;
@property (copy, nonatomic) NSString *detailURLString;
@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) NSString *btmCid;
@property (copy, nonatomic) NSString *btmDid;
@property (copy, nonatomic) NSString *defaultUnitBtmId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)unitBtmId;
- (void).cxx_destruct;

@end
