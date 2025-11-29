@class NSString;
@protocol XPlayCloudMessageDelegate;

@interface XPlayCloudMessage : NSObject <XPlayCloudMessageProtocol>

@property (weak, nonatomic) id<XPlayCloudMessageDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendRTCCustomMessageWithString:(id)a0 callback:(id /* block */)a1;
- (void)sendFrequentRTCCustomMessageWithString:(id)a0;
- (void).cxx_destruct;

@end
