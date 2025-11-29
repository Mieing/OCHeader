@class NSString;

@interface MMScreenShotInfo : NSObject

@property (nonatomic) unsigned int scene;
@property (nonatomic) BOOL showSnsShareItem;
@property (nonatomic) BOOL showBizShareItem;
@property (nonatomic) BOOL showGameCircleShareItem;
@property (nonatomic) BOOL replaceEditWithCropItemInProcess;
@property (readonly, nonatomic) NSString *processTitle;
@property (readonly, nonatomic) id /* block */ processHandler;
@property (copy, nonatomic) id /* block */ onWillForwardMsg;
@property (copy, nonatomic) id /* block */ onDidForwardMsg;
@property (copy, nonatomic) id /* block */ onWillSearch;

- (void)setupWithProcessTitle:(id)a0 processHandler:(id /* block */)a1;
- (id)description;
- (void).cxx_destruct;

@end
