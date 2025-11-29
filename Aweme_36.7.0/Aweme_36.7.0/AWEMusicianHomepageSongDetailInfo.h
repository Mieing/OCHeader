@class NSString, NSArray;

@interface AWEMusicianHomepageSongDetailInfo : NSObject

@property (copy, nonatomic) NSString *songTitle;
@property (copy, nonatomic) NSString *songDescription;
@property (retain, nonatomic) NSArray *artists;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) BOOL isVip;

- (void).cxx_destruct;

@end
