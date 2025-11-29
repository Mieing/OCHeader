@class UIButton, IESECServiceProxy, NSString;
@protocol IESECShopLayoutService, IESECShopForwardCoService, IESECShopPageContextV2;

@interface AWEECShopLiveRoomBackView : UIView <IESECShopLiveRoomBackViewProtocol> {
    id<IESECShopPageContextV2> _context;
}

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
