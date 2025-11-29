@class NSString;

@interface AWEUserCenterModuleConfig : NSObject

@property (class, readonly, nonatomic) BOOL isNewStyle;
@property (class, readonly, nonatomic) BOOL usingAWEColorPrimary;
@property (class, readonly, nonatomic) BOOL hideNoMoreText;
@property (class, readonly, nonatomic) BOOL showLoadingView;
@property (class, readonly, copy, nonatomic) NSString *diskSpaceManagementURL;

+ (id)diskSpaceManagementURL;

@end
