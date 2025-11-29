@class NSString, UIView;
@protocol AWEHomepageLeftLoginEntranceViewProtocol;

@interface AWEPadHomepageLeftLoginEntranceAdapter : HTSService <AWEPadHomepageLeftLoginEntranceProtocol>

@property (retain, nonatomic) UIView<AWEHomepageLeftLoginEntranceViewProtocol> *entranceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)padLeftLoginEntranceViewWithStyle:(long long)a0;
- (BOOL)enable;
- (void).cxx_destruct;

@end
