@class NSDictionary, NSString, NSAttributedString;

@interface AWEIMCustomerServiceNoticeTipMessage : AWEIMMessage <AWEIMMessageConfigProtocol> {
    NSDictionary *_syncedExt;
}

@property (retain, nonatomic) NSDictionary *contentAttributes;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *queueNum;
@property (copy, nonatomic) NSString *staffName;
@property (copy, nonatomic) NSString *pushDetail;
@property (readonly, nonatomic) NSAttributedString *contentAttributedString;
@property (readonly, nonatomic) NSString *connectState;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;
+ (double)containerWith;

- (id)syncedExt;
- (void)setSyncedExt:(id)a0;
- (id)initWithContentDict:(id)a0;
- (BOOL)isUserCellType;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (struct CGSize { double x0; double x1; })p_calculateContentSize;
- (id)p_inQueueContentAttributedString;
- (id)p_inServiceContentAttributedString;
- (id)p_systemCancelContentAttributedString;
- (id)p_userCancelContentAttributedString;
- (id)p_defaultContentAttributedString;
- (void)p_handleSyncedExt:(id)a0;
- (void).cxx_destruct;
- (long long)templateType;
- (double)fontSize;
- (id)style;

@end
