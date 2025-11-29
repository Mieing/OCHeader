@class NSString;

@interface BGMAudioInfo : NSObject

@property (retain, nonatomic) NSString *accompanyMusicFilePath;
@property (retain, nonatomic) NSString *originalMusicFilePath;
@property (nonatomic) long long singingEndPosition;
@property (retain, nonatomic) NSString *uniqueId;

+ (id)createBGMAudioInfoWithSong:(id)a0;

- (void).cxx_destruct;

@end
