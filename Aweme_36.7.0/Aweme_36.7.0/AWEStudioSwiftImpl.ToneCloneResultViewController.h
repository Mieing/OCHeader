@interface AWEStudioSwiftImpl.ToneCloneResultViewController : UIViewController <UITextFieldDelegate, AVAudioPlayerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_statusView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_previewView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_applyButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textField;
    void /* unknown type, empty encoding */ audioPlayer;
    void /* unknown type, empty encoding */ progressTimer;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ audioRecordUrl;
    void /* unknown type, empty encoding */ effectModel;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ duration;
}

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)didClickApplyButton;
- (void)didClickClearInput;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;

@end
