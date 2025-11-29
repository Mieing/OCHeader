@class AWEUserModel;

@interface AWEProfileTopVideoHelper : NSObject

@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL isTopVideoFullScreen;
@property (nonatomic) BOOL isTopVideoDidEnterFullScreen;

- (BOOL)enableTopVideo;
- (BOOL)isTopVideoEnterFullScreen;
- (BOOL)isLeavingFullScreen;
- (void).cxx_destruct;

@end
