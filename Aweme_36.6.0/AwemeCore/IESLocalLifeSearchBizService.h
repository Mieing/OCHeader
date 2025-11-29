@class NSString;

@interface IESLocalLifeSearchBizService : HTSService <IESLocalLifeSearchBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getSearchRecommandWordsWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)abilityKeys;
+ (void)trackEvent:(id)a0 enterFrom:(id)a1 enterFromSecond:(id)a2 projectDetailType:(id)a3 isPop:(id)a4 groupId:(id)a5 wordsContent:(id)a6 imprId:(id)a7 wordsSource:(id)a8 spuId:(id)a9;


@end
