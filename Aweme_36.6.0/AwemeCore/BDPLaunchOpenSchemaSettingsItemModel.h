@class NSString;

@interface BDPLaunchOpenSchemaSettingsItemModel : NSObject

@property (nonatomic) BOOL isEnable;
@property (copy, nonatomic) NSString *schemaType;
@property (copy, nonatomic) NSString *basicURL;
@property (copy, nonatomic) NSString *parseParamsKey;
@property (nonatomic) BOOL isFullScreen;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
