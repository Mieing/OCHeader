@class CEmoticonWrap, NSString, CMessageWrap;
@protocol MMLiteAppHalfScreenStatusChangeListener;

@interface MMEmoticonBrowsePageContext : MMEmoticonLiteAppPageContextBase

@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (retain, nonatomic) CEmoticonWrap *emoticonWrap;
@property (retain, nonatomic) NSString *sdkRequestID;
@property (retain, nonatomic) id<MMLiteAppHalfScreenStatusChangeListener> halfScreenStatusChangeListener;
@property (copy, nonatomic) id /* block */ liteAppConfigBlock;

- (BOOL)isValid;
- (id)pageCreator;
- (BOOL)allowsInEmoticonLimited;
- (unsigned long long)halfScreenHeight:(id)a0;
- (void).cxx_destruct;

@end
