@class FinderBlockViewController, NSString, NSDictionary, OpenApiParameter;

@interface OpenFinderBaseHandler : MMObject <OpenApiFinderBizDelegate>

@property (retain, nonatomic) OpenApiParameter *parameter;
@property (retain, nonatomic) NSDictionary *paramsDict;
@property (retain, nonatomic) NSString *openUrl;
@property (retain, nonatomic) FinderBlockViewController *blockVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startHandlerWithParameter:(id)a0;
- (id)genBlockVC;
- (BOOL)isParameterLegal;
- (void)sendRespTo3rdApp:(id)a0;
- (void)createOpenUrl;
- (void)cancelHandler;
- (void).cxx_destruct;

@end
