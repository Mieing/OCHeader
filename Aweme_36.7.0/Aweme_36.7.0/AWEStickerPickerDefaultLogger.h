@class NSString;

@interface AWEStickerPickerDefaultLogger : NSObject <AWEStickerPickerLoggerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stickerPickerLogger:(id)a0 logMessage:(id)a1 level:(unsigned long long)a2;

@end
