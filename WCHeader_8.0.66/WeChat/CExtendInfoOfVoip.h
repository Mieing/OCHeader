@class NSString, CMessageWrap;

@interface CExtendInfoOfVoip : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>

@property (nonatomic) unsigned int m_uiVoipRecvTime;
@property (nonatomic) unsigned int m_uiVoipStatus;
@property (nonatomic) unsigned int m_uiVoipInviteType;
@property (nonatomic) unsigned long long m_iVoipRoomid;
@property (nonatomic) long long m_i64VoipKey;
@property (nonatomic) unsigned int m_wordingType;
@property (nonatomic) unsigned int m_duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) CMessageWrap *m_refMessageWrap;

+ (void)CreateExtendInfoWithType:(unsigned int)a0 retExtendInfo:(id *)a1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)ChangeForDisplay;
- (void)UpdateContent:(id)a0;
- (void).cxx_destruct;

@end
