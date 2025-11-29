@class NSString, NSDictionary, NSArray, AWEResourceUploadParametersResponseModel, NSNumber, NSMutableArray;
@protocol ACCAuditAudioTaskDelegate, ACCFileUploadServiceProtocol, ACCAudioNetServiceProtocol;

@interface ACCAuditAudioTask : NSObject

@property (readonly, nonatomic) long long foreground;
@property (readonly, nonatomic) NSNumber *adminDraftId;
@property (readonly, nonatomic) NSDictionary *trackExtra;
@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSArray *audioFileNames;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParameters;
@property (retain, nonatomic) id<ACCFileUploadServiceProtocol> uploadService;
@property (retain, nonatomic) id<ACCAudioNetServiceProtocol> audioService;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSMutableArray *materialIds;
@property (retain, nonatomic) NSArray *vids;
@property (nonatomic) long long editType;
@property (readonly, nonatomic) double createTime;
@property (readonly, nonatomic) NSString *awemeID;
@property (readonly, nonatomic) NSArray *errors;
@property (readonly, nonatomic) BOOL executing;
@property (weak, nonatomic) id<ACCAuditAudioTaskDelegate> delegate;

+ (id)taskWithID:(id)a0 error:(id *)a1;
+ (id)taskWithBuilder:(id)a0 error:(id *)a1;

- (BOOL)p_loadWithID:(id)a0 error:(id *)a1;
- (BOOL)p_loadWithBuilder:(id)a0 error:(id *)a1;
- (void)p_synchronize;
- (id)trackExtraDictionary;
- (id)p_errorExtra;
- (void)p_didFetchParameters;
- (void)p_didFinishWithError:(id)a0;
- (void)updateFilePaths:(id)a0 currentIndex:(long long)a1;
- (void)p_didFetchMaterialIds;
- (BOOL)isReviewAsSlides;
- (void).cxx_destruct;
- (id)description;
- (void)execute;
- (id)init;
- (void)destroy;

@end
