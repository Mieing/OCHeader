@interface AWEStudioEditImpl.AESoundFXListItemModel : NSObject <AESoundFXListItemModelProtocol> {
    void /* unknown type, empty encoding */ rawData;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ musicID;
    void /* unknown type, empty encoding */ durationText;
    void /* unknown type, empty encoding */ _playState;
}

- (id)musicModel;
- (long long)currentPlayState;
- (void)updatePlayState:(long long)a0;
- (void)resetItemState;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
