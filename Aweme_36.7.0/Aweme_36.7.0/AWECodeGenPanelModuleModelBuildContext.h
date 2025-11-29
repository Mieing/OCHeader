@class NSString, NSArray;

@interface AWECodeGenPanelModuleModelBuildContext : NSObject

@property (copy, nonatomic) NSString *moduleId;
@property (copy, nonatomic) NSString *moduleType;
@property (copy, nonatomic) NSString *moduleTitle;
@property (copy, nonatomic) NSString *moduleDesc;
@property (copy, nonatomic) NSArray *itemIdentifiers;

- (void).cxx_destruct;

@end
