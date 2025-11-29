@class NSNumber, NSString;

@interface AWEStudioRecordCinemaLayoutAnimationImpl : NSObject <AWEStudioRecordCinemaLayoutAnimation>

@property (copy, nonatomic) NSNumber *duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managerWithView:(id)a0;

- (void)layoutWithBlock:(id /* block */)a0 animated:(BOOL)a1;
- (void)exitCinemaMode_layoutViews:(id)a0 animated:(BOOL)a1;
- (void)enterCinemaMode_layoutViews:(id)a0 animated:(BOOL)a1;
- (id)managerWithView:(id)a0;
- (double)cinemaRecordButtonLabelScale;
- (void)initializeView:(id)a0 status:(id /* block */)a1;
- (void)enterCinemaMode_layoutView:(id)a0 animated:(BOOL)a1;
- (void)exitCinemaMode_layoutView:(id)a0 animated:(BOOL)a1;
- (double)cinemaRecordButtonLabelAlpha;
- (void).cxx_destruct;

@end
