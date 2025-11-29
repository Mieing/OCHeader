@class NSString;

@interface SessionDataStruct : NSObject

@property (retain, nonatomic) NSString *sid;
@property (nonatomic) unsigned long long enterTimeMs;

- (void).cxx_destruct;

@end
