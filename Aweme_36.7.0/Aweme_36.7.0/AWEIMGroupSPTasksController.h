@class WCTDatabase;

@interface AWEIMGroupSPTasksController : NSObject

@property (retain, nonatomic) WCTDatabase *database;

+ (id)sharedInstance;

- (id)wcdbFilePath;
- (void)__log:(id)a0;
- (BOOL)clearDBIfNeeded;
- (id)wcdbDirectory;
- (id)asyncGetConversationTaskControllerWithConversationID:(id)a0;
- (id)conversationTaskControllerWithConversationID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
