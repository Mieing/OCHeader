@class NSString;

@interface BDUGLuckyBackToPageRegisterXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *pageID;
@property (copy, nonatomic) NSString *pageType;
@property (copy, nonatomic) NSString *backToSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
