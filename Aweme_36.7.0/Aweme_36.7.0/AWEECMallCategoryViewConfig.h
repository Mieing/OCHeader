@interface AWEECMallCategoryViewConfig : NSObject

@property (nonatomic) BOOL isBaseMode;
@property (nonatomic) long long defaultSelectedIndex;
@property (nonatomic) long long needKeepTopIndex;
@property (nonatomic) long long maxTitleLen;
@property (nonatomic) double leftMargin;

+ (id)defaultConfig;

@end
