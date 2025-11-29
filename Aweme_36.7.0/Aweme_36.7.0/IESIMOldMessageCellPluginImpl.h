@class NSString;

@interface IESIMOldMessageCellPluginImpl : HTSService <IESIMOldMessageCellPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)oldUserMessageCellFromCell:(id)a0;
- (void)updateViewWithOldCommonInviteTableViewCell:(id)a0;

@end
