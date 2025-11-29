@class NSMutableDictionary, IGListAdapter, NSMutableSet, IESECCommentRunloopTask;

@interface IESECCommentPageContext : NSObject

@property (weak, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) NSMutableSet *registeredCellIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *templateHeightCache;
@property (retain, nonatomic) IESECCommentRunloopTask *runloopTask;

- (void).cxx_destruct;
- (id)init;

@end
