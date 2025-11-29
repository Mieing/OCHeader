@class NSString;

@interface TMNetworkBodyStructDescription : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) TMNetworkBodyStructDescription *child;

- (void).cxx_destruct;

@end
