@class NSString, NSDictionary, AWEGrouponCardLayout;

@interface AWEGrouponLynxModel : MTLModel <MTLJSONSerializing, AWEGrouponSharkLynxModelProtocol>

@property (copy, nonatomic) NSString *cardLayoutString;
@property (retain, nonatomic) AWEGrouponCardLayout *cardLayout;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSString *lynxRawUrl;
@property (copy, nonatomic) NSString *rawData;
@property (copy, nonatomic) NSDictionary *rawDataDict;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (nonatomic) long long cardType;
@property (nonatomic) double height;
@property (nonatomic) BOOL enableRetry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (double)lynxHeight;
- (void).cxx_destruct;

@end
