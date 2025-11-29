@class UIImage, NSDictionary;
@protocol AWEStudioMusicModelProtocol;

@interface AWEMusicShareToStoryRequirement : NSObject

@property (retain, nonatomic) id<AWEStudioMusicModelProtocol> music;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) UIImage *compressedCoverImage;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) BOOL didUserCanceled;
@property (copy, nonatomic) id /* block */ completionHandler;

- (BOOL)isVaild;
- (void).cxx_destruct;

@end
