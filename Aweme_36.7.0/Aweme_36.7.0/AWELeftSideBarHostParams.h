@class NSString, UIViewController;

@interface AWELeftSideBarHostParams : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identification;
@property (readonly, weak, nonatomic) UIViewController *hostVC;
@property (copy, nonatomic) id /* block */ sidebarHostViewController;
@property (copy, nonatomic) id /* block */ sidebarFromViewController;
@property (nonatomic) long long transitionType;
@property (nonatomic) long long displayPosition;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
