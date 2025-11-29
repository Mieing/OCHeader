@protocol AWEUserSharedConfigProtocol;

@interface AWEUserMultiConfig : NSObject

@property (class, readonly, nonatomic) id<AWEUserSharedConfigProtocol> shared;

@end
