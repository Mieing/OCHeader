@class NSString;

@interface WCFinderPostMusicFilePickerAdapter : NSObject <UIDocumentPickerDelegate>

@property (copy, nonatomic) id /* block */ onCancel;
@property (copy, nonatomic) id /* block */ onComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showPicker:(id)a0 fromVC:(id)a1 onCancel:(id /* block */)a2 onComplete:(id /* block */)a3;

- (void)documentPickerWasCancelled:(id)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void).cxx_destruct;

@end
