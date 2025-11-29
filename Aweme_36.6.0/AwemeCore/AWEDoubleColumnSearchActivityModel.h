@class NSString;

@interface AWEDoubleColumnSearchActivityModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *bizParams;
@property (copy, nonatomic) NSString *bizParamsV2;
@property (nonatomic) BOOL needHidePendant;
@property (retain, nonatomic) NSString *localGeckoVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
