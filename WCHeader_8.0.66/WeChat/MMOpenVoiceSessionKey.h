@class NSString;

@interface MMOpenVoiceSessionKey : NSObject

@property (retain, nonatomic) NSString *sessionKey;
@property (nonatomic) unsigned long long timeoutStamp;

- (id)initWithKey:(id)a0 now:(unsigned long long)a1 lifespan:(unsigned int)a2;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
