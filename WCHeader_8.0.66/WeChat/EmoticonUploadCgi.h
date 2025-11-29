@class NSString, NSMutableSet, EmoticonUploadInfoObj;
@protocol EmoticonUploadCgiDelegate;

@interface EmoticonUploadCgi : MMObject <EmojiUploadCgiDelegate> {
    unsigned long long m_requestStartTime;
}

@property (nonatomic) unsigned int m_startPos;
@property (nonatomic) unsigned int m_totalLen;
@property (retain, nonatomic) NSString *m_md5;
@property (retain, nonatomic) NSMutableSet *cgiSets;
@property (weak, nonatomic) id<EmoticonUploadCgiDelegate> delegate;
@property (readonly, nonatomic) EmoticonUploadInfoObj *uploadInfoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUploadInfoObj:(id)a0;
- (BOOL)isActive;
- (BOOL)startRequest;
- (BOOL)internalRequestWithReuseCgi:(id)a0;
- (void)callFailedDelegateWithReason:(unsigned long long)a0;
- (void)onEmojiUploadBufferCgiFinished:(id)a0 isSuccess:(BOOL)a1 isEnd:(BOOL)a2 activityId:(id)a3;
- (void).cxx_destruct;

@end
