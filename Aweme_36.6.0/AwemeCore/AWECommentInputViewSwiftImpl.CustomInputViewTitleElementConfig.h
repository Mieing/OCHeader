@interface AWECommentInputViewSwiftImpl.CustomInputViewTitleElementConfig : NSObject <AWECommentEvaluationInputViewTitleElementConfigurationProtocol> {
    void /* unknown type, empty encoding */ placeHolderString;
    void /* unknown type, empty encoding */ mincount;
    void /* unknown type, empty encoding */ maxcount;
    void /* unknown type, empty encoding */ minToast;
    void /* unknown type, empty encoding */ diableEdit;
    void /* unknown type, empty encoding */ maxToast;
}

- (long long)minimumCount;
- (id)toastForNoMatchMinimumCount;
- (id)toastForNoMatchMaximumCount;
- (BOOL)allowEdit;
- (void).cxx_destruct;
- (id)init;
- (long long)maximumCount;
- (id)placeHolder;

@end
