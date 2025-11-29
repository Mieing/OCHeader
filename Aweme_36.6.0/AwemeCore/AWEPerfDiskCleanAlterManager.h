@class AWEStorage;

@interface AWEPerfDiskCleanAlterManager : NSObject

@property (retain, nonatomic) AWEStorage *universalStorage;
@property (nonatomic) long long cleanSize;
@property (nonatomic) BOOL prepared;
@property (nonatomic) BOOL showing;

+ (id)shareManager;

- (BOOL)shouldAlter;
- (void).cxx_destruct;
- (void)didDismiss;
- (void)prepare;
- (void)didShow;
- (void)updateInfo;

@end
