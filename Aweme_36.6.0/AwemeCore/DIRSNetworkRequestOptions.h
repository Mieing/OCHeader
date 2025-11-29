@class NSArray, NSDictionary, NSString, DIRSContext;
@protocol IRISDataCoder;

@interface DIRSNetworkRequestOptions : NSObject <IRISNetworkRequestOptions>

@property (nonatomic) unsigned long long attempts;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSArray *compressors;
@property (weak, nonatomic) id<IRISDataCoder> encryptor;
@property (weak, nonatomic) id<IRISDataCoder> decryptor;
@property (retain, nonatomic) NSDictionary *userInfo;
@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
