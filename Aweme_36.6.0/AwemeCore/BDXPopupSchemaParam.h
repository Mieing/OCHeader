@class NSString, BDXPopupModel;

@interface BDXPopupSchemaParam : BDXSchemaParam <BDXPopupSchemaParamProtocol>

@property (retain, nonatomic) BDXPopupModel *popupModel;
@property (nonatomic) BOOL adaptAppTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paramWithSchemaData:(id)a0;

- (void)updateWithSchemaData:(id)a0;
- (void).cxx_destruct;

@end
