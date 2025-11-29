@class NSString, AWELongVideoFeedPaymentInfoBody;

@interface AWELVideoStateInFeed : MTLModel <MTLJSONSerializing>

@property (nonatomic, getter=isShowingPreviewEnd) BOOL showPreviewEndView;
@property (nonatomic) BOOL beReplaced;
@property (retain, nonatomic) AWELongVideoFeedPaymentInfoBody *previewEndInfo;
@property (nonatomic) BOOL transferToDetailBySchema;
@property (nonatomic) BOOL didFetchPaymentInfo;
@property (nonatomic) double likeFeedWatchHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
