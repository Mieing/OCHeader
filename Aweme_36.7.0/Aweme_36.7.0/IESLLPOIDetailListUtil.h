@class IESLLPOIDetailBdxNotificationUtil, UIViewController, NSString, LLDitoGeneralContainerPageContext;
@protocol IESLLPOIDetailListAwemeUtilProtocol, IESLLPOIDetailListTrackUtilProtocol, IESLLPOIDetailListCoiUtilProtocol;

@interface IESLLPOIDetailListUtil : NSObject <IESLLPOIDetailListUtilProtocol>

@property (retain, nonatomic) IESLLPOIDetailBdxNotificationUtil *bdxNotificationHelper;
@property (retain, nonatomic) id<IESLLPOIDetailListTrackUtilProtocol> trackUtil;
@property (retain, nonatomic) id<IESLLPOIDetailListAwemeUtilProtocol> awemeUtil;
@property (retain, nonatomic) id<IESLLPOIDetailListCoiUtilProtocol> coiUtil;
@property (weak, nonatomic) UIViewController *detailViewController;
@property (weak, nonatomic) LLDitoGeneralContainerPageContext *context;
@property (nonatomic) BOOL isFromIsolated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindStateAndAction;
- (void).cxx_destruct;

@end
