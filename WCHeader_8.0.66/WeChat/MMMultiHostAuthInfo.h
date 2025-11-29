@class NSDictionary, NSString, NSData;

@interface MMMultiHostAuthInfo : NSObject

@property (retain) NSDictionary *hostToAlgoDictionary;
@property (retain) NSString *identify;
@property (retain) NSData *clientSessionKey;
@property (retain) NSData *serverSessionKey;
@property (retain) NSData *serverId;

- (id)initWithIdentify:(id)a0;
- (BOOL)hasSessionKey;
- (BOOL)isValid;
- (BOOL)hasOtherAlgo;
- (void)updateWithHostAlgoList:(id)a0;
- (id)authInfoForHost:(id)a0;
- (void).cxx_destruct;

@end
