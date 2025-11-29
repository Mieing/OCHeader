@class IESLiveOpenPlatformExplainCardModel;

@interface IESLiveOpenPlatformCardEntry : NSObject

@property (readonly, nonatomic) unsigned long long behavior;
@property (readonly, nonatomic) IESLiveOpenPlatformExplainCardModel *cardModel;

- (id)initWithCardModel:(id)a0;
- (void).cxx_destruct;

@end
