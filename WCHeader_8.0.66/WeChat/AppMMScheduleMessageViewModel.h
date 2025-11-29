@class AppMMScheduleItem;

@interface AppMMScheduleMessageViewModel : CommonMessageViewModel

@property (retain, nonatomic) AppMMScheduleItem *scheduleItem;
@property (nonatomic) double contentWidth;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
