@class NSString, NSDictionary, BDXSchemaParam, BDXContext, NSArray;

@interface BDXKitParams : MTLModel <AnnieXKitModelProtocol>

@property (copy) NSDictionary *internalGlobalProps;
@property (copy, nonatomic) NSString *bid;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) BDXSchemaParam *schemaParams;
@property (copy, nonatomic) NSString *accessKey;
@property (retain, nonatomic) BDXContext *context;
@property (copy, nonatomic) NSDictionary *queryItems;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (copy, nonatomic) NSArray *globalPropsFilterKeys;
@property (nonatomic) BOOL fromAnnieX;
@property (nonatomic) BOOL fromAnnieXSL;
@property (nonatomic) double fontScale;
@property (nonatomic) double viewZoom;
@property (copy, nonatomic) id /* block */ appThemeBlock;
@property (copy, nonatomic) NSString *bridgeNameSpace;
@property (retain, nonatomic) id monitorSettingModel;
@property (nonatomic) BOOL prefetchToGlobalProps;
@property (copy, nonatomic) NSDictionary *prefetchInitData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultGlobalProps;

- (void)updateGlobalProps:(id)a0;
- (id)actualBid;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getSessionId;

@end
