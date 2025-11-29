@class NSString;
@protocol IESLivePublicScreenFontSizeProvider;

@interface IESLivePublicScreenFontSizeHostProvider : NSObject <IESLivePublicScreenFontSizeProvider>

@property (retain, nonatomic) id<IESLivePublicScreenFontSizeProvider> nextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)currentFontSize;

@end
