@class NSArray, NSString;

@interface ALMOwnPlayerTTSInfoConfig : NSObject

@property (nonatomic) long long infoID;
@property (retain, nonatomic) NSArray *URLArray;
@property (nonatomic) double loudness;
@property (nonatomic) double peak;
@property (copy, nonatomic) NSString *fileHash;
@property (nonatomic) unsigned long long bitrate;

- (id)initWithInfoID:(long long)a0 playURLs:(id)a1 loudness:(unsigned long long)a2 peak:(unsigned long long)a3 fileHash:(id)a4 bitrate:(unsigned long long)a5;
- (void).cxx_destruct;

@end
