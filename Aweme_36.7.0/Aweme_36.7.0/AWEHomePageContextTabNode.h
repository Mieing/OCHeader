@class NSString, NSArray;

@interface AWEHomePageContextTabNode : NSObject

@property (copy, nonatomic) NSString *tabId;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEHomePageContextTabNode *selectedNode;
@property (retain, nonatomic) NSArray *childNodes;
@property (copy, nonatomic) NSString *tabId;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEHomePageContextTabNode *selectedNode;
@property (retain, nonatomic) NSArray *childNodes;

- (BOOL)isNodeSelectedWithTabId:(id)a0;
- (id)getChildNodeUsingRecursiveWithTabId:(id)a0;
- (BOOL)hasChildNodeWithTabId:(id)a0;
- (BOOL)hasChildNodeUsingRecursiveWithTabId:(id)a0;
- (id)getChildRootNodeUsingRecursiveWithTabId:(id)a0;
- (void).cxx_destruct;
- (id)selectedNodes;

@end
