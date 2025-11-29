@protocol NSCopying;

@interface AWEPerfFPSRecord : NSObject <NSCopying> {
    double timeoutInterval;
    id /* block */ timeoutCompletion;
    id<NSCopying> key;
    unsigned char state;
    unsigned char anrState;
    struct { unsigned int frames; double duration; double hitchDuration; unsigned int drop3Count; double drop3Duration; unsigned int drop7Count; double drop7Duration; unsigned int jankCount; double jankDuration; unsigned int bigJankCount; double bigJankDuration; unsigned int anrCount; double anrDuration; } totalMetrics;
    struct { unsigned int frames; double duration; double hitchDuration; unsigned int drop3Count; double drop3Duration; unsigned int drop7Count; double drop7Duration; unsigned int jankCount; double jankDuration; unsigned int bigJankCount; double bigJankDuration; unsigned int anrCount; double anrDuration; } scrollMetrics;
    unsigned long long scrollCount;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
