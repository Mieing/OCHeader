@class NSArray;

@interface IESLiveBootloaderTaskItem : NSObject

@property (nonatomic) BOOL finished;
@property (retain, nonatomic) NSArray *models;
@property (nonatomic) unsigned long long stage;
@property (nonatomic) double taskLoadDuration;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) id /* block */ endComplete;

- (void).cxx_destruct;

@end
