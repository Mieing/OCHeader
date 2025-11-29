@class FinderLiveButtonAnimationInfo, NSString;

@interface MMFinderLiveBottomButtonAnimationItem : NSObject

@property (retain, nonatomic) FinderLiveButtonAnimationInfo *animationInfo;
@property (retain, nonatomic) NSString *localFilePath;
@property (nonatomic) unsigned int countdownSeconds;

- (id)initWithAnimationInfo:(id)a0;
- (void).cxx_destruct;

@end
