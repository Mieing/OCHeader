@interface AWEClassroomImpl.ClassroomMaterialDownloader : NSObject <UIDocumentPickerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_cache;
}

- (void)finishSaveImage:(id)a0 error:(id)a1 context:(id)a2;
- (void)finishSaveVideo:(id)a0 error:(id)a1 context:(id)a2;
- (void)documentPickerWasCancelled:(id)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
