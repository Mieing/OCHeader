@class NSString;

@interface HLLiteRecord : NSObject

@property (nonatomic) unsigned long long rid;
@property (retain, nonatomic) NSString *data;

- (void).cxx_destruct;

@end
