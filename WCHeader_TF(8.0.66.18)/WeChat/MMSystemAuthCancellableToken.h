@class MMPageSheetBaseView;

@interface MMSystemAuthCancellableToken : NSObject

@property (nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL isCompleted;
@property (weak, nonatomic) MMPageSheetBaseView *sheetView;

+ (id)CompletedInstance;

- (void)cancel;
- (void).cxx_destruct;

@end
