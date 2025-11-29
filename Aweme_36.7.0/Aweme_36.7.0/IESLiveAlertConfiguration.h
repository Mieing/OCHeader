@class NSArray;

@interface IESLiveAlertConfiguration : NSObject

@property (nonatomic) BOOL useNewStyle;
@property (nonatomic) BOOL actionsAxisForceVertical;
@property (nonatomic) BOOL showCloseButton;
@property (nonatomic) BOOL autoDismiss;
@property (nonatomic) BOOL dismissOnTapBackground;
@property (copy, nonatomic) id /* block */ descriptionTapBlock;
@property (retain, nonatomic) NSArray *actionConfigurations;

- (void).cxx_destruct;

@end
