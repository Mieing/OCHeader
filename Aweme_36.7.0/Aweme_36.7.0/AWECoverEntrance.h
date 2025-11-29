@protocol ACCPublishMergeImageHelperProtocol;

@interface AWECoverEntrance : NSObject

@property (retain, nonatomic) id<ACCPublishMergeImageHelperProtocol> mergeHelper;
@property (nonatomic) BOOL loading;
@property (nonatomic) double clickTime;
@property (nonatomic) long long createVideoDataType;
@property (nonatomic) long long generateSourceDuration;
@property (nonatomic) long long generateModelDuration;

+ (id)shared;

- (void)releaseMergeHelper;
- (void).cxx_destruct;

@end
