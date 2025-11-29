@class NSString;

@interface IESMMBingoBeats : NSObject

@property (retain, nonatomic) NSString *veBeatsPath;
@property (retain, nonatomic) NSString *downBeatsPath;
@property (retain, nonatomic) NSString *noStengthPath;
@property (retain, nonatomic) NSString *sequentialPath;
@property (nonatomic) int mode;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)init;

@end
