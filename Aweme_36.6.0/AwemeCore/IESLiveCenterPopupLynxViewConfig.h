@interface IESLiveCenterPopupLynxViewConfig : IESLiveBasePopupLynxViewConfig

@property (nonatomic) BOOL newCloseStyle;
@property (nonatomic) BOOL banTapMaskToClose;
@property (copy, nonatomic) id /* block */ closeHandler;

- (void).cxx_destruct;

@end
