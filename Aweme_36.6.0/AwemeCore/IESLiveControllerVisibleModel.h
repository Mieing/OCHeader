@class NSString, UIViewController, NSUUID;

@interface IESLiveControllerVisibleModel : NSObject <NSCopying>

@property (weak, nonatomic) UIViewController *controller;
@property (retain) NSString *controllerName;
@property (retain) NSUUID *identifier;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } controllerRect;
@property BOOL fullScreen;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property double calcCost;
@property long long calcCount;
@property long long whitelistStatus;

+ (id)pagesDescription:(id)a0;
+ (id)deepCopyPages:(id)a0;

- (BOOL)isPageExist;
- (id)whitelistStatusStr;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithController:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
