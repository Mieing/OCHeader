@class NSString;

@interface TPPlayerRecord : NSObject

@property (nonatomic) long long fileOpenedTime;
@property (nonatomic) long long firstPacketReadTime;
@property (retain, nonatomic) NSString *definition;
@property (nonatomic) BOOL useP2p;
@property (nonatomic) long long playerType;

- (void).cxx_destruct;

@end
