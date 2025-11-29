@class NSString, NSArray, UIImage;

@interface AWESearchAIGCHistoryPreviewQueryVideoInfo : AWEBaseApiModel <AWESearchAIGCVideoCoverProvider>

@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSArray *videoImageURLList;
@property (nonatomic) long long videoImageHeight;
@property (nonatomic) long long videoImageWidth;
@property (retain, nonatomic) UIImage *videoImage;
@property (copy, nonatomic) NSString *leftTopTittle;
@property (nonatomic) BOOL isFromSevenSplitScreen;
@property (nonatomic) BOOL isEnterFullScreenFromSevenSplitScreen;
@property (nonatomic) double sevenSplitScreenProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
