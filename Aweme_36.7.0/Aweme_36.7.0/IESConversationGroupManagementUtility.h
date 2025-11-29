@interface IESConversationGroupManagementUtility : NSObject

+ (id)groupManagementInfoForIdentifier:(id)a0;
+ (void)asyncGetGroupManagementInfoWithIdentifier:(id)a0 completion:(id /* block */)a1;
+ (id)processQueue;

@end
