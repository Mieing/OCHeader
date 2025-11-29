@class NSString, AWETextStickerReadModel;

@interface ACCAETTSViewModel : NSObject <ACCAETTSServiceProtocol>

@property (retain, nonatomic) AWETextStickerReadModel *textReadModel;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) NSString *pickerTitle;
@property (nonatomic) BOOL showPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)showTTSPickerWithModel:(id)a0 title:(id)a1 finishPicking:(id /* block */)a2 cancelPicking:(id /* block */)a3;
- (BOOL)isChangeTTS;
- (void)pickTTSWithModel:(id)a0 filePath:(id)a1 speakerId:(id)a2 speakerName:(id)a3 toneTab:(id)a4 words:(id)a5;
- (void)cancelPicking;
- (void).cxx_destruct;

@end
