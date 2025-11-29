@class NSString;

@interface WAWebVCProxy : NSObject <IWAWebVCService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getWebVCByUrl:(id)a0 presentModal:(BOOL)a1;
+ (id)getWAHTMLWebVCWithURL:(id)a0 extraInfo:(id)a1;
+ (void)tryJumpWeAppOrH5:(id)a0 H5EntryScene:(id)a1 animated:(BOOL)a2;


@end
