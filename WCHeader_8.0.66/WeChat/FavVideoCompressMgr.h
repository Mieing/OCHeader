@class NSString, NSMutableArray;

@interface FavVideoCompressMgr : MMUserService <MMServiceProtocol> {
    NSMutableArray *m_compressingQueue;
    BOOL m_compressing;
    int m_retryTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isContainCompressingVideo:(id)a0;
- (BOOL)tryCompressVideo:(id)a0 IsPriority:(BOOL)a1;
- (void)startCompressVideo;
- (id /* block */)getCompressCallbackBlock;
- (void).cxx_destruct;

@end
