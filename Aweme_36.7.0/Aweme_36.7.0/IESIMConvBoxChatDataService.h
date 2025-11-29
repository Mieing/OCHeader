@class NSString;

@interface IESIMConvBoxChatDataService : HTSService <IESIMConvBoxChatDataService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createConvBoxChatDataManagerWithBoxType:(long long)a0;
- (id)createConvBoxChatDataManagerWithBoxType:(long long)a0 sortOrderVersion:(id)a1;
- (id)createConvBoxChatDataManagerWithBoxType:(long long)a0 sortOrderVersion:(id)a1 boxTypeMask:(long long)a2 unreadNeglectMask:(long long)a3;

@end
