@class ILALogModel;

@interface ILALogManager : NSObject

@property (retain, nonatomic) ILALogModel *logModel;

+ (id)sharedInstance;

- (void)event:(id)a0 params:(id)a1;
- (void)log:(id)a0 level:(unsigned long long)a1;
- (void).cxx_destruct;

@end
