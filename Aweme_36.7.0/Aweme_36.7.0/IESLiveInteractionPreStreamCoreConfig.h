@class NSString, NSDictionary, IESLiveSEIReceiver;
@protocol IESLiveSEIParserResult, IESLiveDIContext;

@interface IESLiveInteractionPreStreamCoreConfig : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isFullScreenPreStreamView;
@property (nonatomic) BOOL enableAutoFetchList;
@property (copy, nonatomic) NSDictionary *listV2ExtraParams;
@property (nonatomic) BOOL disableUsersListFilter;
@property (retain, nonatomic) id<IESLiveSEIParserResult> firstSEI;
@property (weak, nonatomic) IESLiveSEIReceiver *seiReceiver;
@property (weak, nonatomic) id<IESLiveDIContext> diContext;
@property (nonatomic) BOOL isFromPreStreamPreLoad;

- (void).cxx_destruct;

@end
