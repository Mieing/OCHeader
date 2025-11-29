@class NSOutputStream, NSString, NSObject, NSURL, NSInputStream, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SRProxyConnect : NSObject <NSStreamDelegate> {
    id /* block */ _completion;
    NSString *_httpProxyHost;
    unsigned int _httpProxyPort;
    struct __CFHTTPMessage { } *_receivedHTTPHeaders;
    NSString *_socksProxyHost;
    unsigned int _socksProxyPort;
    NSString *_socksProxyUsername;
    NSString *_socksProxyPassword;
    BOOL _connectionRequiresSSL;
    NSMutableArray *_inputQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) NSOutputStream *outputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_configureProxy;
- (void)_fetchPAC:(id)a0 withProxySettings:(id)a1;
- (void)_runPACScript:(id)a0 withProxySettings:(id)a1;
- (void)_readProxySettingWithType:(id)a0 settings:(id)a1;
- (void)_initializeStreams;
- (void)_proxyDidConnect;
- (void)_didConnect;
- (void)_processInputStream;
- (void)_dequeueInput;
- (BOOL)_proxyProcessHTTPResponseWithData:(id)a0;
- (void)_proxyHTTPHeadersDidFinish;
- (void)openNetworkStreamWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)_failWithError:(id)a0;
- (void)_writeData:(id)a0;
- (void)_openConnection;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)dealloc;

@end
