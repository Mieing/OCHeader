@class NSArray, NSString;

@interface IESIMCleanSwitchFilterTypeViewController : UIViewController <IESIMSingleSelectionPanelDelegate>

@property (copy, nonatomic) id /* block */ selectBlock;
@property (copy, nonatomic) NSArray *selectTypes;
@property (nonatomic) unsigned long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
