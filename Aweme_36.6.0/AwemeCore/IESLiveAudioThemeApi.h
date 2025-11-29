@interface IESLiveAudioThemeApi : HTSLiveApi

- (void)monitorEvent:(id)a0 serviceName:(id)a1 roomID:(id)a2 anchorID:(id)a3 parameters:(id)a4 error:(id)a5;
- (void)fetchList:(id)a0 roomID:(id)a1 bgType:(int)a2 imageType:(id)a3 playMode:(id)a4 completion:(id /* block */)a5;
- (void)deleteImage:(id)a0 roomID:(id)a1 anchorID:(id)a2 bgType:(int)a3 completion:(id /* block */)a4;
- (void)setTheme:(id)a0 roomID:(id)a1 anchorID:(id)a2 imageType:(id)a3 bgType:(int)a4 completion:(id /* block */)a5;
- (void)addUGCBackground:(id)a0 bgType:(int)a1 fileFormat:(id)a2 showArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 roomID:(id)a4 anchorID:(id)a5 completion:(id /* block */)a6;
- (void)fetchLatestThemeWithBGType:(int)a0 roomID:(id)a1 anchorID:(id)a2 completion:(id /* block */)a3;

@end
