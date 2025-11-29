@class NSString, AWETheaterPageContext, AWETheaterTracker;

@interface AWETheaterBaseSectionController : AWEBaseListSectionController <AWETheaterSectionControllerProtocol>

@property (retain, nonatomic) AWETheaterPageContext *context;
@property (retain, nonatomic) AWETheaterTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
