@class NSString, FavAudioInfo;

@interface FavRecordVoiceNodeView : FavRecordLeftThumbRightLabelNodeView <IFavAudioPlayerExt> {
    FavAudioInfo *m_audioInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (void)addContentSubView;
- (void)onClick;
- (void)OnBeginPlay:(id)a0;
- (void)OnEndPlay:(id)a0;
- (void)OnPlayError:(id)a0;
- (void).cxx_destruct;

@end
