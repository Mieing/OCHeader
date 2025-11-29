@class NSThread, NSMutableDictionary;

@interface WAEJFontCache : NSObject {
    NSMutableDictionary *fonts;
    NSMutableDictionary *gfxFonts;
    NSThread *thread;
}

- (id)init;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)doClearFonts;
- (id)fontWithDescriptor:(id)a0 contentScale:(float)a1 isWgfxMode:(BOOL)a2;
- (id)outlineFontWithDescriptor:(id)a0 lineWidth:(float)a1 contentScale:(float)a2 isWgfxMode:(BOOL)a3;
- (id)fontWithDescriptor:(id)a0 contentScale:(float)a1;
- (id)outlineFontWithDescriptor:(id)a0 lineWidth:(float)a1 contentScale:(float)a2;

@end
