@class NSString, BDXPageModel;

@interface BDXPageSchemaParam : BDXSchemaParam <BDXPageSchemaParamProtocol>

@property (retain, nonatomic) BDXPageModel *pageModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paramWithSchemaData:(id)a0;

- (void)updateWithSchemaData:(id)a0;
- (void).cxx_destruct;

@end
