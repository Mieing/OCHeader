@class NSError;

@interface IESGCPPreloadResult : NSObject

@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) id result;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
