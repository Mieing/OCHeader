@class NSString, CMessageWrap;

@interface CExtendInfoOfTextForBiz : NSObject <IMessageWrapForBizExt, IMsgExtendOperation, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) CMessageWrap *m_refMessageWrap;

+ (void)CreateExtendInfoWithTypeForBiz:(unsigned int)a0 retExtendInfo:(id *)a1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)GetDisplayContent;
- (void).cxx_destruct;

@end
