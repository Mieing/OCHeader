@class NSMutableDictionary;

@interface TSPacketResponse : NSObject

@property (nonatomic) int errorCode;
@property (retain, nonatomic) NSMutableDictionary *externals;

- (id)init;
- (void).cxx_destruct;

@end
