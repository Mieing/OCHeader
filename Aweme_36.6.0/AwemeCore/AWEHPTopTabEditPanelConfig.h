@class NSArray, NSString;

@interface AWEHPTopTabEditPanelConfig : NSObject

@property (retain, nonatomic) NSArray *itemList;
@property (copy, nonatomic) id /* block */ clickSaveCallback;
@property (copy, nonatomic) id /* block */ dismissCallback;
@property (copy, nonatomic) id /* block */ currentChannelID;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL needHaptic;

- (void).cxx_destruct;

@end
