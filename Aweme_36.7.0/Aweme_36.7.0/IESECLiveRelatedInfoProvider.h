@class NSArray, NSDictionary, NSMutableDictionary, IESECLiveContext, NSString;

@interface IESECLiveRelatedInfoProvider : NSObject <IESECLiveRelatedInfoProviderProtocol>

@property (retain, nonatomic) NSDictionary *originRelatedInfoDic;
@property (retain, nonatomic) NSArray *relatedInfoConfigArray;
@property (retain, nonatomic) NSDictionary *relatedDicForListTop;
@property (retain, nonatomic) NSDictionary *relatedDicForRelatedCard;
@property (retain, nonatomic) NSDictionary *relatedDicForPublicMessage;
@property (retain, nonatomic) NSMutableDictionary *relatedDict;
@property (weak, nonatomic) IESECLiveContext *liveContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveContext:(id)a0;
- (id)relatedInfoForRequest:(long long)a0;
- (void)replacePartRelatedInfo:(id)a0;
- (void)adjustRelatedInfoAfterShowInList;
- (BOOL)existListTopRelatedInfo;
- (id)relatedInfoDictWithType:(long long)a0;
- (BOOL)isHighlightRelatedTab;
- (void)goodsListClosed;
- (void)p_handleOriginRelatedInfo:(id)a0;
- (id)p_requestDicForSupportType:(long long)a0 originRelatedInfoDic:(id)a1;
- (void)prepareRelatedInfoWithOriginRelatedInfo:(id)a0;
- (id)relatedTypeArray;
- (id)relatedInfoDictWithRelatedType:(id)a0 originRelatedInfo:(id)a1;
- (id)p_supportModeKeyFromEnumType:(long long)a0;
- (void).cxx_destruct;

@end
