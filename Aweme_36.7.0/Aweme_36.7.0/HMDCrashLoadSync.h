@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCrashLoadSync : NSObject {
    BOOL _mirrorEnabled;
    NSString *_mirrorPath;
    NSObject<OS_dispatch_queue> *_queue;
    void *_mappedAddress;
    unsigned long long _mappedSize;
    unsigned long long _lastWrittenSize;
    BOOL _mirrorSetup;
}

@property (nonatomic) BOOL started;
@property (retain, nonatomic) NSString *mirrorPath;
@property (retain, nonatomic) NSString *currentDirectory;
@property (retain, nonatomic) NSString *UUID;
@property (nonatomic, getter=isLastTimeCrash) BOOL lastTimeCrash;
@property (nonatomic, getter=isLastTimeLoadCrash) BOOL lastTimeLoadCrash;
@property (readonly, nonatomic) BOOL starting;

+ (id)sync;

- (void)writeMirror;
- (void)tackerCallback;
- (void).cxx_destruct;
- (BOOL)started;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (BOOL)starting;

@end
