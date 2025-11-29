@interface TXCScreenHDRBrightnessMonitor : NSObject

@property BOOL abort;
@property BOOL captured;
@property BOOL lowPowerModeEnabled;
@property double currentEDRHeadroom;
@property double potentialEDRHeadroom;

- (id)init;
- (void)dealloc;
- (void)setup;
- (void)addObservers;
- (void)removeObservers;
- (BOOL)needToCheckBrightness;
- (void)checkIfBrightnessIsActive;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })getStats;
- (void)onPowerStateDidChange:(id)a0;
- (void)onCapturedDidChange:(id)a0;
- (BOOL)isActive;
- (void)stop;

@end
