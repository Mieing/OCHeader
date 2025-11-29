@class NSString;

@interface WCFinderMusicSelectViewInitParams : NSObject

@property (copy, nonatomic) NSString *ostBtnTitle;
@property (nonatomic) unsigned long long btnOption;
@property (nonatomic) BOOL ostBtnDefaultOn;

+ (id)defaultParams;

- (void).cxx_destruct;

@end
