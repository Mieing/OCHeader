@class AWEUserLoginTitleView, NSString;

@interface AWEUserTitleComponent : NSObject <AWEUserContainerTitleComponentProtocol>

@property (retain, nonatomic) AWEUserLoginTitleView *titleView;
@property (retain, nonatomic) NSString *titleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
