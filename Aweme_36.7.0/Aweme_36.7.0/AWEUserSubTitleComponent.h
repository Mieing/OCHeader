@class NSString, AWEUserLoginSubTitleView, AWEUserComponentSubtitleModel;

@interface AWEUserSubTitleComponent : NSObject <AWEUserContainerSubtitleComponentProtocol>

@property (retain, nonatomic) AWEUserLoginSubTitleView *subTitleView;
@property (retain, nonatomic) AWEUserComponentSubtitleModel *subtitleModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
