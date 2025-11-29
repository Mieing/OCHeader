@class NSMutableArray;

@interface TPSeekRecord : NSObject

@property (nonatomic) unsigned long long lastEvent;
@property (nonatomic) long long seekBufferedCount;
@property (nonatomic) BOOL isSeeking;
@property (retain, nonatomic) NSMutableArray *seekItemArray;

- (void).cxx_destruct;

@end
