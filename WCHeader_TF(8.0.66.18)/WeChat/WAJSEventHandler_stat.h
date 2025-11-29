@class NSMutableDictionary;

@interface WAJSEventHandler_stat : WAJSEventHandler_BaseEvent

@property (retain, nonatomic) NSMutableDictionary *recursiveDic;

- (void)handleJSEvent:(id)a0;
- (void)innerHandleJSEven:(id)a0;
- (id)dicFromStat:(struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; })a0;
- (void)traversePath:(id)a0 isLocalCache:(BOOL)a1;
- (void).cxx_destruct;

@end
