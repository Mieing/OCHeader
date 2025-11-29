@class NSString, NSMutableArray;

@interface ChatToolsConfig : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *root;
@property (retain, nonatomic) NSString *entryPagePath;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSMutableArray *scopes;
@property (retain, nonatomic) NSMutableArray *supportedMaterials;

+ (void)initialize;

@end
