@class CMessageWrap, NSString, PushMailWrap;

@interface CExtendInfoOfPushMail : NSObject <IMsgExtendOperation, IMessageWrapExt, NSCopying>

@property (retain, nonatomic) PushMailWrap *m_oPushMailWrap;
@property (weak, nonatomic) CMessageWrap *m_refMessageWrap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)CreateExtendInfoWithType:(unsigned int)a0 retExtendInfo:(id *)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)ChangeForDisplay;
- (id)messageFTSText;
- (void).cxx_destruct;

@end
