@interface ReaderYuanBaoUtil : NSObject

+ (id)getYuanBaoReaderWrapIfHave:(id)a0;
+ (BOOL)checkTXNewsMsgHasYuanBaoPromotionItem:(id)a0;
+ (BOOL)unwrapYuanBaoAppStatusFromTXNewsMsg:(id)a0;
+ (BOOL)unwrapYuanBaoAppStatusFromTXNewsReaderWrap:(id)a0;
+ (BOOL)updateYuanBaoAppStatusFromReaderWrap:(id)a0 toDic:(id)a1;
+ (void)udpateYuanBaoAppStatusFromTXNewsMsg:(id)a0 toDic:(id)a1;
+ (void)saveYuanBaoAMSAdInfoIfNeededWhenReceiveMsg:(id)a0;

@end
