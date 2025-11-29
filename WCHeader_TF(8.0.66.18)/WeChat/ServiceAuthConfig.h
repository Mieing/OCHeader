@class NSArray, NSString, UIColor;

@interface ServiceAuthConfig : NSObject

@property (copy, nonatomic) NSArray *authServices;
@property (copy, nonatomic) NSArray *noAuthServices;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *loadingRequestSuccessText;
@property (retain, nonatomic) NSArray *contentArgs;
@property (retain, nonatomic) NSString *titleForCancelBtn;
@property (retain, nonatomic) UIColor *titleColorForCancelBtn;
@property (retain, nonatomic) NSString *titleForConfirmBtn;
@property (retain, nonatomic) UIColor *colorForConfirmBtn;
@property (retain, nonatomic) id attachInfo;
@property (copy, nonatomic) id /* block */ resultBlock;

- (id)init;
- (id)initForOpenStyle;
- (id)initForCloseStyle;
- (void)updateIfNeed;
- (void).cxx_destruct;

@end
