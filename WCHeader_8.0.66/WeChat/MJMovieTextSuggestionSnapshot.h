@class NSString, NSData;

@interface MJMovieTextSuggestionSnapshot : NSObject

@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } snapshotTime;
@property (retain, nonatomic) NSData *jpegData;
@property (retain, nonatomic) NSString *ocrText;
@property (retain, nonatomic) NSString *cdnUrl;
@property (nonatomic) BOOL isPrefetched;

- (id)initWithSessionID:(id)a0 snapshotTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
