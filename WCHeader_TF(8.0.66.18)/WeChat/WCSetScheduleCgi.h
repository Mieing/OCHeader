@class WCScheduleItem;
@protocol WCSetScheduleCgiDelegate;

@interface WCSetScheduleCgi : WCBaseCgi

@property (retain, nonatomic) WCScheduleItem *handleItem;
@property (weak, nonatomic) id<WCSetScheduleCgiDelegate> delegate;

- (id)init;
- (void)addScheduleItem:(id)a0;
- (void)addRemindOnceSchedule:(id)a0 remindDate:(id)a1;
- (void)modifyRemindOnceSchedule:(id)a0 remindDate:(id)a1;
- (void)modifyScheduleRemind:(id)a0 remindDate:(id)a1;
- (void)removeScheduleRemind:(id)a0;
- (void)removeScheduleItem:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
