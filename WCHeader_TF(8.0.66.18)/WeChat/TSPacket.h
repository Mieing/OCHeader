@class NSData;

@interface TSPacket : NSObject

@property (retain, nonatomic) NSData *data;

+ (int)uniqueTag;

- (void).cxx_destruct;

@end
