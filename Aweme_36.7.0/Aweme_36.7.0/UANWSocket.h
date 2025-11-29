@class NSObject;
@protocol OS_nw_connection, OS_dispatch_queue;

@interface UANWSocket : UASocket {
    unsigned int _receive_length;
}

@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL useTLS;

- (id)initWithHost:(id)a0 port:(id)a1;
- (void)certVerifyWithOptions:(id)a0;
- (void)socketOccursError:(id)a0;
- (void)readData;
- (void).cxx_destruct;
- (void)disconnect;
- (void)writeData:(id)a0;
- (void)connect;
- (void)dealloc;

@end
