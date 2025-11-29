@class NSString, NSArray, NSDictionary, AWEResourceUploadParametersResponseModel, NSNumber;

@interface ACCAuditAudioTaskBuilder : NSObject

@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSNumber *adminDraftId;
@property (copy, nonatomic) NSString *temporaryAudioPath;
@property (copy, nonatomic) NSArray *temporaryAudioPaths;
@property (copy, nonatomic) NSArray *vids;
@property (copy, nonatomic) NSDictionary *trackExtra;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParameters;
@property (nonatomic) double createTime;
@property (nonatomic) long long editType;
@property (nonatomic) BOOL isReviewAsSlides;

- (void).cxx_destruct;

@end
