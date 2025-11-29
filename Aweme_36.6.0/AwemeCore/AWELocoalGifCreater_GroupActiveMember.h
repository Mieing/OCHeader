@class NSString, AWELocoalGifCreaterContext;

@interface AWELocoalGifCreater_GroupActiveMember : AWELocoalGifBaseCreater <AWELocoalGifMessageCreatable>

@property (copy, nonatomic) NSString *gifTitle;
@property (readonly, nonatomic) AWELocoalGifCreaterContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
