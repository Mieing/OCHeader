@class NSDictionary, UIViewController, NSString;

@interface IESECCartRequest : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *rawParams;
@property (weak, nonatomic) UIViewController *presenting;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL openWithSaaS;
@property (readonly, nonatomic) BOOL showHalfScreen;
@property (copy, nonatomic) NSString *cartHeightPercent;
@property (copy, nonatomic) NSString *theNewSourceType;
@property (copy, nonatomic) NSString *historyPath;
@property (copy, nonatomic) NSString *enterFromLiveSaaS;
@property (copy, nonatomic) NSString *ecomSceneID;
@property (copy, nonatomic) NSString *cartIDs;
@property (copy, nonatomic) NSString *shopIDs;
@property (copy, nonatomic) NSString *anchorCartID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
