@class NSString;

@interface IESIMDBConversationORMBatchUpdateManager : NSObject <IESIMDBConversationORMBatchUpdateManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateConvWhenBoxTypeMaskChangedWithConv:(id)a0;
- (void)updateConvWhenConvInfoChangedWithConv:(id)a0;

@end
