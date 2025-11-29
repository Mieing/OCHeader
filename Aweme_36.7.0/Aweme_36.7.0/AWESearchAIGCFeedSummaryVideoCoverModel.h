@class NSString, NSArray, UIImage;

@interface AWESearchAIGCFeedSummaryVideoCoverModel : MTLModel <MTLJSONSerializing, AWESearchAIGCVideoCoverProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSArray *videoImageURLList;
@property (nonatomic) long long videoImageHeight;
@property (nonatomic) long long videoImageWidth;
@property (retain, nonatomic) UIImage *videoImage;
@property (copy, nonatomic) NSString *leftTopTittle;
@property (nonatomic) BOOL isFromSevenSplitScreen;
@property (nonatomic) BOOL isEnterFullScreenFromSevenSplitScreen;
@property (nonatomic) double sevenSplitScreenProgress;

- (void).cxx_destruct;

@end
