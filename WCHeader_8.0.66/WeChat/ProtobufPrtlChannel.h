@class NSObject, ProtobufCGIWrap;

@interface ProtobufPrtlChannel : NSObject {
    ProtobufCGIWrap *m_pbCGIWrap;
    NSObject *m_ptrl;
}

+ (void)setDefaultRetryCount:(int)a0;
+ (int)getDefaultRetryCount;

- (void)initProtocolChannel;
- (id)initWithCGIWrap:(id)a0;
- (void)InitPrtl:(unsigned int)a0 Delegate:(id)a1 Scene:(unsigned int)a2;
- (BOOL)Start;
- (void)Stop;
- (void).cxx_destruct;

@end
