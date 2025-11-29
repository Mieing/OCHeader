@class NSString;

@interface AWEHPProfileSideBarModuleContext : NSObject

@property (copy, nonatomic) NSString *sideBarIdentifer;
@property (copy, nonatomic) NSString *moduleType;
@property (nonatomic) long long themeMode;
@property (nonatomic) long long themeType;
@property (nonatomic) double leftSideBarWidth;
@property (nonatomic) double leftSideBarHorizontalPadding;

- (void).cxx_destruct;

@end
