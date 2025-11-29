@class CContact;

@interface WCFinderCommentDetailTextViewMentionEntry : NSObject

@property (nonatomic) BOOL isValid;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } mentionRange;
@property (retain, nonatomic) CContact *mentionContact;

+ (id)entryWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 contact:(id)a1;

- (void).cxx_destruct;

@end
