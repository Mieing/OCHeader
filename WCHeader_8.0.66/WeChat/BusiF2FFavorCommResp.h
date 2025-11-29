@class NSString, NSMutableArray;

@interface BusiF2FFavorCommResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *favorInfoList;
@property (retain, nonatomic) NSMutableArray *favorComposeResultList;
@property (retain, nonatomic) NSString *defaultFavComposeId;
@property (retain, nonatomic) NSString *favorRespSign;
@property (retain, nonatomic) NSString *noComposeWording;

+ (id)GenFromDictionary:(id)a0;
+ (id)composeInfoWithArray:(id)a0 SelectedArray:(id)a1;
+ (BOOL)favor:(id)a0 InArray:(id)a1;
+ (id)sortComposeArray:(id)a0;
+ (void)initialize;

- (BOOL)isFakeResp;
- (void)updateFakeBit:(BOOL)a0;
- (id)composeInfoDefault;
- (id)composeInfoWithId:(id)a0;
- (id)composeArrayWithFavor:(id)a0;

@end
