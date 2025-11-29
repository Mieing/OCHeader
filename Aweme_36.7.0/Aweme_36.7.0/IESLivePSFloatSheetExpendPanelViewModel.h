@class NSArray, HTSLiveMessageListNode, IESLivePublicScreenCommonMessageParser, IESLivePublicScreenDisplayTextParseConfig, NSAttributedString, NSString;
@protocol IESLivePSFloatSheetDelegate;

@interface IESLivePSFloatSheetExpendPanelViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>

@property (copy, nonatomic) NSAttributedString *contentAttributedString;
@property (retain, nonatomic) IESLivePublicScreenCommonMessageParser *messageParser;
@property (retain, nonatomic) IESLivePublicScreenDisplayTextParseConfig *displayTextStyleConfig;
@property (retain, nonatomic) NSArray *items;
@property (readonly, nonatomic) HTSLiveMessageListNode *node;
@property (retain, nonatomic) Class cellClass;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (weak, nonatomic) id<IESLivePSFloatSheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)updateMessageListNode:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;

@end
