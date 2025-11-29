@class NSString, CMessageWrap;

@interface CExtendInfoOfMassSend : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>

@property (retain, nonatomic) NSString *toListMd5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) CMessageWrap *m_refMessageWrap;

+ (void)CreateExtendInfoWithUserName:(id)a0 retExtendInfo:(id *)a1 retIsContinueDispatch:(BOOL *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)ChangeForDisplay;
- (void)UpdateContent:(id)a0;
- (void)UpdateMassSendContent;
- (void).cxx_destruct;

@end
