@class NSURL, NSString, BDSimPlayerOptions;
@protocol BDSimPlayModel;

@interface BDSimPlayerItem : NSObject

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSString *videoID;
@property (retain, nonatomic) id<BDSimPlayModel> playModel;
@property (retain, nonatomic) BDSimPlayerOptions *playerOptions;
@property (copy, nonatomic) id /* block */ dataSourceListHandler;

+ (id)playerItemWithModel:(id)a0 options:(id)a1;
+ (id)playerItemWithURL:(id)a0 options:(id)a1;
+ (id)playerItemWithVid:(id)a0 options:(id)a1;

- (id)initWithVid:(id)a0 options:(id)a1;
- (id)initWithModel:(id)a0 options:(id)a1;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 options:(id)a1;

@end
