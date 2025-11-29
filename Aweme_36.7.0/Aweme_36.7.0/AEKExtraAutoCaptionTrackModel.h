@class NSDictionary, NSArray, NSString;

@interface AEKExtraAutoCaptionTrackModel : NSObject <AEKExtraDataRepositoryProperty>

@property (copy, nonatomic) NSDictionary *styleConfigs;
@property (copy, nonatomic) NSDictionary *intelliInfo;
@property (copy, nonatomic) NSDictionary *uploadInfo;
@property (copy, nonatomic) NSArray *faceInfo;
@property (copy, nonatomic) NSString *originStr;
@property (copy, nonatomic) NSString *translationLanguage;
@property (nonatomic) unsigned long long mandrainStatus;
@property (nonatomic) BOOL highlightReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
