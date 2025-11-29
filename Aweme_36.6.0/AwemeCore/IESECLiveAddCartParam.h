@class NSString;

@interface IESECLiveAddCartParam : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *firstSkuID;
@property (retain, nonatomic) NSString *trackExtra;
@property (retain, nonatomic) NSString *originID;
@property (retain, nonatomic) NSString *originType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
