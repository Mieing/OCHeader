@protocol AWEStickerPickerLoggerDelegate;

@interface AWEStickerPickerLogger : NSObject

@property (class, readonly, nonatomic) AWEStickerPickerLogger *sharedInstance;

@property (weak, nonatomic) id<AWEStickerPickerLoggerDelegate> delegate;

- (void)logLevel:(unsigned long long)a0 format:(id)a1;
- (void).cxx_destruct;

@end
