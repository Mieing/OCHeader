@interface IESSCAVFoundationUtil : NSObject

+ (id)trackKey:(id)a0;
+ (id)identifierWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
+ (id)mutableTrackCompatibleWithComposition:(id)a0 track:(id)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
+ (BOOL)hasAudio:(id)a0;
+ (BOOL)hasVideo:(id)a0;

@end
