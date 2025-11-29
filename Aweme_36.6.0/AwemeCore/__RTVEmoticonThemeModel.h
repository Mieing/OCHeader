@class NSArray, NSString;

@interface __RTVEmoticonThemeModel : NSObject <RTVEmoticonThemeModel>

@property (readonly, nonatomic) unsigned long long themeStyle;
@property (readonly, copy, nonatomic) NSArray *emoticonArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAWEIMThemeModel:(id)a0;
- (id)initWithThemeStyle:(unsigned long long)a0 emoticonArray:(id)a1;
- (void)__convertToRTVStyle:(long long)a0;
- (void)__convertToRTVEmoticon:(id)a0;
- (void).cxx_destruct;

@end
