@class ServiceNotifyMessageItem;

@interface ServiceNotifyMessageViewModel : CommonMessageViewModel

@property (retain, nonatomic) ServiceNotifyMessageItem *serviceNotifyMsgItem;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;
+ (id)titleFont;
+ (double)itemsFontSize;
+ (id)itemsFont;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (double)calculateHeight;
- (void).cxx_destruct;

@end
