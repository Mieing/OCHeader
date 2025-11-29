@class NSString;
@protocol IESIMSingleSelectionPanelDelegate;

@interface AWEIMDUXSingleSelectionPanelDelegateWrapper : NSObject <DUXSingleSelectionPanelDelegate>

@property (weak, nonatomic) id<IESIMSingleSelectionPanelDelegate> panelDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
