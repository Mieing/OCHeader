@class NSString;

@interface BDUGLuckyBackToPageXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *pageID;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long enterFromMode;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
