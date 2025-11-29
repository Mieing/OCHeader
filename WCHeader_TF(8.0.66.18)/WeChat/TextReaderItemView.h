@class NSString;

@interface TextReaderItemView : ReaderItemView <RichTextLayoutDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)topView;
- (void)normalView;
- (void)internalInitView;

@end
