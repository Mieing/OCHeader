@protocol MonoServiceMsgDelegate;

@interface MonoServiceMsg : NSObject <NSCopying>

@property (weak, nonatomic) id<MonoServiceMsgDelegate> m_delegate;

- (id)init;
- (BOOL)isOutOfDate;
- (BOOL)isCancelMsg;
- (id)serviceType;
- (id)msgKey;
- (BOOL)isTheSameToMsg:(id)a0;
- (BOOL)isParaVaild;
- (id)localNotificationInfo;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
