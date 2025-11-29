@class NSString, NSArray;
@protocol CJPayFalconHtmlConfigModel;

@interface CJPayFalconCustomConfigModel : JSONModel

@property (nonatomic) BOOL enableCustomConfig;
@property (nonatomic) BOOL interceptHtml;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSArray *hostList;
@property (copy, nonatomic) NSString *assetPath;
@property (copy, nonatomic) NSArray<CJPayFalconHtmlConfigModel> *htmlFileList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
