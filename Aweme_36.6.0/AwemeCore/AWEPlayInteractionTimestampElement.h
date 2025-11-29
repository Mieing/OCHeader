@class UILabel, NSString;

@interface AWEPlayInteractionTimestampElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UILabel *timestampLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (id)dateFormatterForFull;
+ (id)formattedDateForFullTimestamp:(double)a0;
+ (BOOL)shouldActiveWithData:(id)a0 context:(id)a1;

- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)updateTimestampWithModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setUpUI;

@end
