@class NSString;
@protocol IESLivePublicScreenFontSizeProvider;

@interface IESLivePublicScreenFontSizeLiveProvider : NSObject <IESLivePublicScreenFontSizeProvider>

@property (nonatomic) unsigned long long currentFontSizeType;
@property (retain, nonatomic) id<IESLivePublicScreenFontSizeProvider> nextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)defaultFontSizeType;
- (void).cxx_destruct;
- (id)init;
- (void)setFontSize:(unsigned long long)a0;
- (unsigned long long)currentFontSize;

@end
