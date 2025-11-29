@class IESLiveInteractiveStrongReminderStore, NSTimer, NSString;

@interface IESLiveInteractiveStrongReminderFragment : IESLiveRoomComponent <IESLiveInteractiveStrongReminderRouter>

@property (retain, nonatomic) IESLiveInteractiveStrongReminderStore *store;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long acceptStrongReminder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
