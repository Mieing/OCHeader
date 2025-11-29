@class BDXResourceModel, NSString, BDXContainerModel, BDXWebKitModel, NSURL, AnnieXLynxSchemaModel;
@protocol BDSchemaDataProtocol;

@interface BDXSchemaParam : NSObject

@property (retain, nonatomic) NSString *puzzleContextKey;
@property (retain, nonatomic) id<BDSchemaDataProtocol> schemaData;
@property (retain, nonatomic) BDXContainerModel *containerModel;
@property (retain, nonatomic) AnnieXLynxSchemaModel *lynxModel;
@property (retain, nonatomic) BDXWebKitModel *webModel;
@property (retain, nonatomic) BDXResourceModel *resourceModel;
@property (retain, nonatomic) NSURL *originURL;
@property (retain, nonatomic) NSURL *resolvedURL;

+ (id)paramWithSchemaData:(id)a0;

- (void)updateWithSchemaData:(id)a0;
- (void)updateWithParam:(id)a0;
- (void).cxx_destruct;
- (id)queryItems;
- (void)updateWithDictionary:(id)a0;

@end
