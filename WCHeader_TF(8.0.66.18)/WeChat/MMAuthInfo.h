@class NSString, NSData;

@interface MMAuthInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSString *identify;
@property (nonatomic) int encryptAlgo;
@property (retain) NSData *clientSessionKey;
@property (retain) NSData *serverSessionKey;
@property (retain) NSData *serverId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
