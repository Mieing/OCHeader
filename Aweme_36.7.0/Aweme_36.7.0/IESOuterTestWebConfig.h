@interface IESOuterTestWebConfig : NSObject

@property (nonatomic) BOOL hideNavigationBar;
@property (nonatomic) BOOL enableSwipeGoBack;
@property (nonatomic) BOOL scalePageToFit;
@property (nonatomic) BOOL disableAllBounces;
@property (nonatomic) BOOL enableSecLink;

- (id)init;

@end
