@class NSArray, TIMXOMessagesDataSourceUpdate, NSString;

@interface BDECIMCloudMessagesInConversationDataSourceUpdateImpV2 : NSObject <BDECIMCloudMessagesInConversationDataSourceUpdateV2>

@property (retain, nonatomic) TIMXOMessagesDataSourceUpdate *update;
@property (readonly, nonatomic) NSArray *beforeUpdateMessageIdentifiers;
@property (readonly, nonatomic) NSArray *afterUpdateMessageIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
