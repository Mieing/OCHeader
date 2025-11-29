@class NSString, NSArray, NSDictionary;

@interface AWELeftExtensionCellConfigModel : NSObject

@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *itemType;
@property (nonatomic) BOOL needShowDot;
@property (nonatomic) BOOL needBigDivider;
@property (copy, nonatomic) NSArray *showInOthersTab;
@property (copy, nonatomic) NSArray *schemaTrackQuery;
@property (copy, nonatomic) NSDictionary *extraInfo;

+ (id)configLeftExtensionCellModelWithParams:(id)a0 isNormal:(BOOL)a1;

- (void).cxx_destruct;

@end
