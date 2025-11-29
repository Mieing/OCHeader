@class NSString;

@interface BDPLogModel : BDPBasePluginModel

@property (nonatomic) unsigned long long level;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) const char *filename;
@property (nonatomic) const char *funcName;
@property (nonatomic) int line;
@property (copy, nonatomic) NSString *content;

- (void).cxx_destruct;

@end
