@class UIView;
@protocol AWEHPSkylightProtocol, AWEHPSkylightUndertakeContextProtocol;

@interface AWEHPSkylightCreateResultModel : NSObject

@property (retain, nonatomic) UIView<AWEHPSkylightProtocol> *skylightContainer;
@property (retain, nonatomic) id<AWEHPSkylightUndertakeContextProtocol> skylightContext;

- (void).cxx_destruct;

@end
