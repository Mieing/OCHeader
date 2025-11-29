@class NSMutableArray, NSObject;

@interface QBWupTransfer : NSObject {
    NSObject *_requestLock;
    BOOL _haveRetryRequest;
    BOOL _needEncrpyt;
    NSMutableArray *_requests;
}

- (id)init;
- (id)sendUniPackets:(id)a0 completeHandle:(id /* block */)a1;
- (id)sendUniPacket:(id)a0 completeHandle:(id /* block */)a1;
- (id)encodeRequestData:(id)a0 encryptKey:(id)a1;
- (id)decodeResponseData:(id)a0;
- (void)addPostDataWithZipAndEncryption:(id)a0 withData:(id)a1 forServant:(id)a2 withAESKey:(id)a3;
- (id)uniPacketFromHttpResponseData:(id)a0 withRequestHeaders:(id)a1 withAESKey:(id)a2;
- (void).cxx_destruct;

@end
