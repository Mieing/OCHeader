@class AWESearchBarContainerBtnHotSpotConfig;

@interface AWESearchBarContainerConfig : NSObject

@property (retain, nonatomic) AWESearchBarContainerBtnHotSpotConfig *clearBtnHotSpotArea;
@property (retain, nonatomic) AWESearchBarContainerBtnHotSpotConfig *scanBtnHotSpotArea;

- (void)fetchHotSpotConfig;
- (id)clearBtnHotSpotAreaDic;
- (id)scanBtnHotSpotAreaDic;
- (void).cxx_destruct;
- (id)init;

@end
