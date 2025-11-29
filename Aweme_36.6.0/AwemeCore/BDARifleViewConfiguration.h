@class NSArray, NSString, NSData, NSDictionary, BDARifleAdInfoParams, NSNumber;
@protocol BDARifleCreateLynxKitParamsProtocol;

@interface BDARifleViewConfiguration : NSObject

@property (copy, nonatomic) NSArray *customLynxMethods;
@property (copy, nonatomic) NSString *bid;
@property (copy, nonatomic) NSString *accessKey;
@property (retain, nonatomic) id globalProps;
@property (copy, nonatomic) NSData *templateData;
@property (copy, nonatomic) NSArray *extraJSPaths;
@property (copy, nonatomic) NSDictionary *initialData;
@property (copy, nonatomic) NSDictionary *customQueryItems;
@property (nonatomic) long long widthMode;
@property (nonatomic) long long heightMode;
@property (nonatomic) BOOL needUpdateScreenSize;
@property (nonatomic) BOOL disableAutoExpose;
@property (retain, nonatomic) BDARifleAdInfoParams *adInfo;
@property (copy, nonatomic) NSArray *customInstanceMethods;
@property (copy, nonatomic) NSArray *disableInnerMethodNames;
@property (copy, nonatomic) NSArray *customUIElements;
@property (nonatomic) double fontScale;
@property (nonatomic) BOOL enableCanvas;
@property (weak, nonatomic) id<BDARifleCreateLynxKitParamsProtocol> paramsDelegate;
@property (nonatomic) long long jsRuntimeState;
@property (retain, nonatomic) NSNumber *useTemplateBundle;
@property (nonatomic) BOOL enableReuse;
@property (retain, nonatomic) NSNumber *useAnnieXMode;

- (id)generateLynxKitParamsWithSchemaModel:(id)a0 context:(id)a1;
- (id)generateLynxKitParamsWithSchemaModel:(id)a0 context:(id)a1 params:(id)a2;
- (void).cxx_destruct;

@end
