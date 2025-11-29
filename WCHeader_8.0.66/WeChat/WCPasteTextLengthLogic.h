@interface WCPasteTextLengthLogic : MMObject

@property (nonatomic) unsigned long long pasteLength;

- (void)textChange:(id)a0;
- (BOOL)isPasteTooLongWithTextLength:(unsigned long long)a0;
- (void)reset;

@end
