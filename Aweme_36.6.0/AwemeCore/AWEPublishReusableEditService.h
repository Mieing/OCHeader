@class ACCRepositoryWorkspace, ACCThreadSafeArray, NLEInterface_OC;
@protocol ACCEditServiceProtocol;

@interface AWEPublishReusableEditService : NSObject

@property (readonly, nonatomic) id<ACCEditServiceProtocol> editService;
@property (readonly, nonatomic) NLEInterface_OC *nle;
@property (retain, nonatomic) ACCThreadSafeArray *useScenes;
@property (retain, nonatomic) ACCRepositoryWorkspace *copiedWorkspace;
@property (nonatomic) long long index;

- (id)initWithNle:(id)a0 editService:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end
