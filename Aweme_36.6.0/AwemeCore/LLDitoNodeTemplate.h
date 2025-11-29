@class NSString;

@interface LLDitoNodeTemplate : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) unsigned long long priority;

- (void).cxx_destruct;

@end
