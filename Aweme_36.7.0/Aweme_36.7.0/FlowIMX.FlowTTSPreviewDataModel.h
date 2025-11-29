@class NSString;

@interface FlowIMX.FlowTTSPreviewDataModel : NSObject {
    void /* unknown type, empty encoding */ _version;
    void /* unknown type, empty encoding */ _previewText;
    void /* unknown type, empty encoding */ _previewAudio;
    void /* unknown type, empty encoding */ _previewAudioURI;
}

@property (nonatomic, copy) NSString *version;
@property (nonatomic, copy) NSString *previewText;
@property (nonatomic, copy) NSString *previewAudio;
@property (nonatomic, copy) NSString *previewAudioURI;

- (void)updatePreviewDataModelWithDataModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
