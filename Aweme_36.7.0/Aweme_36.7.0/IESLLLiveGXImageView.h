@class NSString;

@interface IESLLLiveGXImageView : UIImageView <GXImageViewProtocal>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)gx_resetForReuse;
- (void)gx_setMarkInfo:(id)a0;
- (void)gx_setSummaryInfo:(id)a0;
- (void)gx_setImageWithURLArray:(id)a0 placeholderImage:(id)a1 completed:(id /* block */)a2;
- (void)gx_setImageWithURLString:(id)a0 placeholderImage:(id)a1 completed:(id /* block */)a2;
- (void)gx_setLocalImage:(id)a0;
- (void)trackerImageMonitor:(double)a0 endTime:(double)a1 url:(id)a2 image:(id)a3;

@end
