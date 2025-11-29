@class NSString, HTSLiveDress;

@interface IESLiveMultiBaseResourceManager : NSObject

@property (nonatomic) int playMode;
@property (copy, nonatomic) NSString *dressId;
@property (nonatomic) int dressType;
@property (retain, nonatomic) HTSLiveDress *dress;
@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) id /* block */ updateUIBlock;

- (void)setDidUpdateDress:(id /* block */)a0;
- (void)updateDressId:(id)a0 dressType:(int)a1;
- (void)handleFetchDressResponse:(id)a0 status:(long long)a1 error:(id)a2;
- (void)fetchDress:(id /* block */)a0;
- (void)updateDressId:(id)a0 dressType:(int)a1 updateUIBlock:(id /* block */)a2;
- (void)fetchEffectList:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
