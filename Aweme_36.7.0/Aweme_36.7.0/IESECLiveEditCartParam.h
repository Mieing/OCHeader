@class NSString;

@interface IESECLiveEditCartParam : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *requestParam;
@property (retain, nonatomic) NSString *firstSkuID;
@property (retain, nonatomic) NSString *trackExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
