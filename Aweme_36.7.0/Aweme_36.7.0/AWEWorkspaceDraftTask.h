@class NSString;

@interface AWEWorkspaceDraftTask : NSObject

@property (readonly, copy, nonatomic) NSString *draftID;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, copy, nonatomic) NSString *actionDescriprion;
@property (copy, nonatomic) id /* block */ action;

- (id)initWithDraftID:(id)a0 actionDescriprion:(id)a1;
- (BOOL)isCurrentUserTask;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
