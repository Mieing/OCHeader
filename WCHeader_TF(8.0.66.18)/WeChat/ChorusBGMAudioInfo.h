@class NSString;

@interface ChorusBGMAudioInfo : NSObject

@property (retain, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) NSString *accompanyMusicFilePath;
@property (retain, nonatomic) NSString *originalMusicFilePath;
@property (nonatomic) long long singingEndPosition;

+ (id)createBGMAudioInfoWithSong:(id)a0;

- (BOOL)isValid;
- (id)description;
- (void).cxx_destruct;

@end
