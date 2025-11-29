@class NSString;

@interface AWEStudioEditViewFactoryImpl : NSObject <AWEStudioEditViewFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)textStickerViewWithTextInfo:(id)a0 options:(unsigned long long)a1;
- (id)textStickerViewWithTextInfo:(id)a0 options:(unsigned long long)a1 delegate:(id)a2 isSocialText:(BOOL)a3;

@end
