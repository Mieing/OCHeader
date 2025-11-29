@class NSArray, HTSLiveMessageListNode;

@interface IESLivePSActionSheetPanelViewModel : NSObject

@property (copy, nonatomic) NSArray *topSpecialAreaItems;
@property (retain, nonatomic) NSArray *tableViewModels;
@property (retain, nonatomic) HTSLiveMessageListNode *messageNode;

- (void).cxx_destruct;

@end
