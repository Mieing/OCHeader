@class BDASifAdInfoModel, NSString, NSArray, BDASifPageModel, BDASifWebModel, UIView, NSDictionary, BDASifPopupModel, BDASifLynxModel;
@protocol BDASifLifecycleDelegate, BDXNavigationBarProtocol, BDASifRequestInterceptorProtocol;

@interface BDASifConfiguration : NSObject

@property (nonatomic) unsigned long long containerType;
@property (nonatomic) unsigned long long viewType;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSDictionary *customQueryItems;
@property (retain, nonatomic) id customObject;
@property (copy, nonatomic) NSArray *customInstanceMethods;
@property (retain, nonatomic) BDASifAdInfoModel *adModel;
@property (retain, nonatomic) BDASifPopupModel *popupModel;
@property (retain, nonatomic) BDASifPageModel *pageModel;
@property (retain, nonatomic) BDASifLynxModel *lynxModel;
@property (retain, nonatomic) BDASifWebModel *webModel;
@property (copy, nonatomic) id /* block */ webInterceptorBlock;
@property (retain, nonatomic) id<BDASifRequestInterceptorProtocol> interceptor;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL hideNavBar;
@property (weak, nonatomic) id<BDASifLifecycleDelegate> sifLifecycleDelegate;
@property (retain, nonatomic) Class pageClazz;
@property (retain, nonatomic) Class schemeParamClazz;
@property (retain, nonatomic) UIView<BDXNavigationBarProtocol> *navBar;
@property (nonatomic) double viewWith;
@property (nonatomic) double viewHeight;

- (void).cxx_destruct;
- (id)init;

@end
