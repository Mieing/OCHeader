@class EmoticonUploadInfoObj, NSData, NSString;
@protocol EmojiUploadCgiDelegate;

@interface EmojiUploadCgi : StoreEmotionBaseCgi {
    NSString *m_md5;
    unsigned int m_totalLen;
    unsigned long long m_requestStartTime;
}

@property (retain, nonatomic) EmoticonUploadInfoObj *uploadInfoObj;
@property (weak, nonatomic) id<EmojiUploadCgiDelegate> delegate;
@property (readonly, nonatomic) unsigned int startPos;
@property (readonly, nonatomic) NSData *buffer;
@property (readonly, nonatomic) NSString *realMd5;
@property (readonly, nonatomic) BOOL overLimit;
@property (readonly, nonatomic) BOOL isTooLarge;
@property (readonly, nonatomic) BOOL isConnectFailed;
@property (readonly, nonatomic) BOOL isAntiSpam;

- (id)initWithMd5:(id)a0 totalLen:(unsigned int)a1;
- (BOOL)startRequestWithStartPos:(unsigned int)a0 buffer:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
