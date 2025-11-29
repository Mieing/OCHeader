@interface WeChat.KaraMomentVideoProphet : WeChat.KaraProphetModule <WeChat.IKaraFeatureCenterMomentVideo, WeChat.IKaraMomentExt> {
    void /* unknown type, empty encoding */ peakPeriodModel;
}

- (void)moment:(id)a0 receivedAt:(id)a1;
- (void)momentWillBePreloaded:(id)a0 atDate:(id)a1;
- (void)predictVideoSourceWithDataItem:(id)a0 mediaItem:(id)a1 customConfidence:(id)a2 atDate:(id)a3;
- (void)thumbnailOfMomentMedia:(id)a0 downloadedAt:(id)a1;
- (void)mediaOfMomentWithIdentified:(id)a0 atPosition:(long long)a1 recalledAt:(id)a2;
- (void)mediaOfMomentWithIdentified:(id)a0 atPosition:(long long)a1 preparedAt:(id)a2;

@end
