@class NSData;

@interface JITRuntimeRemoteBuffer : NSObject

@property (nonatomic) long long allocType;
@property (retain, nonatomic) NSData *data;

- (void).cxx_destruct;

@end
