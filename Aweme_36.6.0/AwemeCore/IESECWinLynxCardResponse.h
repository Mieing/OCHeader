@class NSString, IESECWinLynxSSR, IESECWinLynxCardConfig;

@interface IESECWinLynxCardResponse : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *lynxData;
@property (retain, nonatomic) IESECWinLynxCardConfig *lynxConfig;
@property (retain, nonatomic) IESECWinLynxSSR *lynxSsr;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long lynxCardType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lynxConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
