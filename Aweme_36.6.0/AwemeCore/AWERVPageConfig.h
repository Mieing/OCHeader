@class NSString;
@protocol AWERVPageMetaConfigProtocol, AWERVPagePlayerConfigProtocol, AWERVPageBottomConfigProtocol, AWERVPageListConfigProtocol;

@interface AWERVPageConfig : NSObject <AWERVPageConfigProtocol>

@property (retain, nonatomic) id<AWERVPagePlayerConfigProtocol> playerConfig;
@property (retain, nonatomic) id<AWERVPageMetaConfigProtocol> metaConfig;
@property (retain, nonatomic) id<AWERVPageListConfigProtocol> listConfig;
@property (retain, nonatomic) id<AWERVPageBottomConfigProtocol> bottomConfig;
@property (copy, nonatomic) NSString *preferTheme;
@property (nonatomic) BOOL hiddenBottomInteractView;
@property (nonatomic) BOOL forceInteractionViewMoveUp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
