@class NSString;

@interface AWERTVRemindModel : NSObject

@property (readonly, copy, nonatomic) NSString *reminderUserID;
@property (readonly, copy, nonatomic) NSString *roomID;
@property (readonly, nonatomic) double callAt;
@property (readonly, nonatomic) double showAt;
@property (readonly, nonatomic) long long remindType;

- (id)initWithReminderUserID:(id)a0 callAt:(double)a1;
- (void)updateShowTimestamp:(double)a0;
- (void)updateRoomID:(id)a0;
- (void)updateRemindType:(long long)a0;
- (void).cxx_destruct;

@end
