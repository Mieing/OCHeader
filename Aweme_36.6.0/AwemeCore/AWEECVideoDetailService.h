@class NSString, IESECTracker;

@interface AWEECVideoDetailService : HTSService <AWEECVideoDetailService, AWEAwemeDetailTableViewControllerDelegate> {
    double _enterTime;
    NSString *_tag;
    NSString *_aid;
}

@property (retain, nonatomic) IESECTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoPlayerDidReadyForDisplay:(id)a0;
- (void)enterVideoDetailWithDataController:(id)a0 onVC:(id)a1 tag:(id)a2 aid:(id)a3 initialIndex:(long long)a4 params:(id)a5 logExtraDict:(id)a6 dataControllerChangedBlock:(id /* block */)a7;
- (void).cxx_destruct;

@end
