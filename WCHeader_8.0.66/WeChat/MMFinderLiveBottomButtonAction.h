@class NSArray, WCLiveBottomTextButton, MMUIButton;

@interface MMFinderLiveBottomButtonAction : NSObject

@property (weak, nonatomic) id target;
@property (weak, nonatomic) MMUIButton *button;
@property (retain, nonatomic) NSArray *selectorNames;
@property (readonly, nonatomic) WCLiveBottomTextButton *folderFuncButton;

- (void).cxx_destruct;

@end
