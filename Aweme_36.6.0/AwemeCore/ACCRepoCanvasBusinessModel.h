@class NSString;
@protocol ACCMusicModelProtocol;

@interface ACCRepoCanvasBusinessModel : NSObject <ACCRepositoryDraftContextDeprecated, AWERepositoryDraftProtocol, ACCRepoRegister, ACCRepositoryRequestParamsDeprecated, ACCRepositoryTrackContextDeprecated, NSCopying, ACCRepoCanvasBusinessData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<ACCMusicModelProtocol> rePostMusicModel;
@property (copy, nonatomic) NSString *musicID;
@property (nonatomic) long long socialType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

@end
