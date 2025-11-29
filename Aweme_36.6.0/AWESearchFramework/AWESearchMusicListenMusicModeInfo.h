@class NSString, AWESearchCorrectModel, NSDictionary, NSMutableArray, NSNumber;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchMusicListenMusicModeInfo : NSObject

@property (retain, nonatomic) NSMutableArray *listenMusicsArray;
@property (copy, nonatomic) NSString *correctName;
@property (retain, nonatomic) AWESearchCorrectModel *correctModel;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> currentRootModel;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;

- (void).cxx_destruct;
- (id)init;

@end
