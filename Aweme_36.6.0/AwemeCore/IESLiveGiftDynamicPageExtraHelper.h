@class IESLiveThreadSafeDictionary, IESLiveCombineSubject, IESLiveGiftExtraDynamicConfig;

@interface IESLiveGiftDynamicPageExtraHelper : NSObject

@property (retain, nonatomic) IESLiveThreadSafeDictionary *pageExtraInfosDic;
@property (retain, nonatomic) IESLiveThreadSafeDictionary *dynamicExtraInfosDic;
@property (retain, nonatomic) IESLiveGiftExtraDynamicConfig *dynamicConfig;
@property (retain, nonatomic) IESLiveCombineSubject *pageExtraFetchedCombineSubject;

- (id)getRegisterMessageLatchAdaptor;
- (void)removeAllDynamicExtra;
- (void)updateWithMessageType:(id)a0 definition:(id)a1;
- (id)dynamicExtraForKey:(id)a0;
- (id)parseDynamicExtra:(id)a0 forKey:(id)a1;
- (void)removeAllExtra;
- (id)dynamicPageExtraCacheForKey:(id)a0;
- (id)onPageExtraInfoFetched;
- (void)updateExtra:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
