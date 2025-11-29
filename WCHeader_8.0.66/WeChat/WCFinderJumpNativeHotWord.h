@class NSString, NSData;

@interface WCFinderJumpNativeHotWord : NSObject

@property (copy, nonatomic) NSString *hotwordText;
@property (nonatomic) unsigned int actionType;
@property (copy, nonatomic) NSString *sessionBufferString;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) unsigned long long hotwordId;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
