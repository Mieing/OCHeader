@class NSString, LiveCore;

@interface IESLiveStreamContourInfoServiceImpl : NSObject <IESLiveStreamContourInfoService>

@property (retain, nonatomic) LiveCore *livecore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)streamContourInfoWithContourInfoData:(id)a0 contourInfoStr:(id)a1;
- (id)streamContourInfoWithContourModel:(id)a0;
- (void).cxx_destruct;

@end
