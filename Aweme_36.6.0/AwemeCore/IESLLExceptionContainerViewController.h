@class IESLLUIKitViewControllerEmptyPageConfig, NSString;
@protocol IESLLExceptionContainerViewControllerDelegate;

@interface IESLLExceptionContainerViewController : UIViewController <IESLocalLifeEmptyPageProtocol>

@property (retain, nonatomic) IESLLUIKitViewControllerEmptyPageConfig *customConfig;
@property (weak, nonatomic) id<IESLLExceptionContainerViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
