@class NSObject;
@protocol TTAccountMulticastProtocol;

@interface TTAccountMulticastInfo : NSObject

@property (weak, nonatomic) NSObject<TTAccountMulticastProtocol> *delegate;

- (void).cxx_destruct;

@end
