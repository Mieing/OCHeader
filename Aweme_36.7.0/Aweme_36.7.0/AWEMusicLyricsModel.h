@class NSString;

@interface AWEMusicLyricsModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *text;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
