@class NSString;

@interface CgiCollectConfig : NSObject

@property (retain, nonatomic) NSString *businessIdStr;
@property (nonatomic) unsigned int collectItemSize;
@property (nonatomic) unsigned int collectItemTimeSeconds;

- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;

@end
