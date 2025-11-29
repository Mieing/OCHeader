@class DTFLogFile;

@interface DTFLogIndex : NSObject

@property (nonatomic) char flag;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long length;
@property (nonatomic) double time;
@property (retain, nonatomic) DTFLogFile *file;

- (void).cxx_destruct;
- (id)uniqueId;
- (id)description;

@end
