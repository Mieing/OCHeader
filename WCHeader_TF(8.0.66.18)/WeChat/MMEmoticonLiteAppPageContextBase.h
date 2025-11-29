@class NSString;
@protocol MMLiteAppHalfScreenStatusChangeListener;

@interface MMEmoticonLiteAppPageContextBase : NSObject <MMEmoticonLiteAppPageContext>

@property (nonatomic) int emotionScene;
@property (nonatomic) BOOL isPresentModal;
@property (nonatomic) unsigned long long enterTimeInMs;
@property (nonatomic) BOOL useHalfScreen;
@property (copy, nonatomic) id /* block */ openFailCallback;
@property (retain, nonatomic) id<MMLiteAppHalfScreenStatusChangeListener> halfScreenStatusChangeListener;
@property (copy, nonatomic) id /* block */ liteAppConfigBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isValid;
- (id)pageCreator;
- (BOOL)allowsInEmoticonLimited;
- (unsigned long long)halfScreenHeight;
- (void).cxx_destruct;

@end
