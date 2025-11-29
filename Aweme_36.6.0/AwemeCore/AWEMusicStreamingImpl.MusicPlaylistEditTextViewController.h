@interface AWEMusicStreamingImpl.MusicPlaylistEditTextViewController : UIViewController <UITextViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_textView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_placeholderLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lengthLabel;
    void /* unknown type, empty encoding */ textMaxLength;
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ emotyTips;
    void /* unknown type, empty encoding */ contentEditClosure;
    void /* unknown type, empty encoding */ isMiniLuna;
    void /* unknown type, empty encoding */ type;
}

- (void)textViewDidChange:(id)a0;
- (void)backAction;
- (void)saveAction;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
