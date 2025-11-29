@class NSArray, NSString, NSDictionary, NSMutableArray;
@protocol ACCStickerPannelLogger;

@interface ACCBaseInformationStickerDataManager : NSObject <ACCUserServiceMessage>

@property (copy, nonatomic) NSArray *stickerCategories;
@property (copy, nonatomic) NSArray *stickerEffects;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL isLoginStateChange;
@property (retain, nonatomic) NSMutableArray *comletionArray;
@property (copy, nonatomic) NSString *pannelName;
@property (copy, nonatomic) NSDictionary *trackExtraDic;
@property (copy, nonatomic) NSString *requestID;
@property (weak, nonatomic) id<ACCStickerPannelLogger> logger;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogout;
- (void)downloadStickersWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
