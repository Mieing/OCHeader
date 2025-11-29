@class IESECSliceXTemplateConfig, NSString, IESECSliceXUIFont, IESECSliceXBaseElementView, IESECSliceXInstance, IESECSliceXContainerView;
@protocol IESECSliceXInstanceInterface, SLIActionInterceptor;

@interface IESECSliceXElementViewContext : NSObject {
    IESECSliceXContainerView *_containerView;
}

@property (readonly, nonatomic) IESECSliceXInstance *realInstance;
@property (retain, nonatomic) IESECSliceXTemplateConfig *templateConfig;
@property (retain, nonatomic) IESECSliceXUIFont *fontContext;
@property (nonatomic) BOOL isPrecreating;
@property (weak, nonatomic) id<SLIActionInterceptor> actionInterceptor;
@property (readonly, nonatomic) IESECSliceXBaseElementView *rootView;
@property (readonly, nonatomic) id<IESECSliceXInstanceInterface> sliceInstance;
@property (readonly, nonatomic) NSString *bizCode;
@property (readonly, nonatomic) NSString *templateName;
@property (readonly, nonatomic) NSString *uniqueID;

- (void).cxx_destruct;
- (id)containerView;

@end
