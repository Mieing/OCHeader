@class UIView, MMFinderLiveConnectMicUser;
@protocol MMFinderLiveConnectMicOperationViewBase;

@interface MMFinderLiveConnectMicUserUIWrap : NSObject

@property (retain, nonatomic) MMFinderLiveConnectMicUser *userInfo;
@property (retain, nonatomic) UIView<MMFinderLiveConnectMicOperationViewBase> *userView;
@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) BOOL useVideo;

- (void).cxx_destruct;

@end
