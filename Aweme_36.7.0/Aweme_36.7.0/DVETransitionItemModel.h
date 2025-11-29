@protocol DVEResourceModelProtocol;

@interface DVETransitionItemModel : NSObject

@property (readonly, nonatomic) BOOL isAutoSelected;
@property (readonly, nonatomic) BOOL isNone;
@property (readonly, nonatomic) long long selectedAlreadyDownloadSuccessCount;
@property (readonly, nonatomic) id<DVEResourceModelProtocol> effectModel;

- (id)initWithEffectModel:(id)a0 isAutoSelected:(BOOL)a1 isNone:(BOOL)a2 selectedAlreadyDownloadSuccessCount:(long long)a3;
- (void).cxx_destruct;

@end
