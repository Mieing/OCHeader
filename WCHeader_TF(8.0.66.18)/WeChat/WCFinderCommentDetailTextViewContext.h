@class NSString;

@interface WCFinderCommentDetailTextViewContext : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } lastReplacementRange;
@property (copy, nonatomic) NSString *lastReplacementText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } backupStartRange;

- (void)updateTextViewReplacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 text:(id)a1;
- (void)checkBackupStatusWithTextView:(id)a0;
- (void)clearContext;
- (BOOL)isLastChangeValid;
- (void).cxx_destruct;

@end
