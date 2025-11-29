@class NSString;

@interface AudioDataPayloadParam : NSObject

@property (nonatomic) long long seqId;
@property (nonatomic) long long srcDataSize;
@property (copy, nonatomic) NSString *extra;

- (void)dealloc;

@end
