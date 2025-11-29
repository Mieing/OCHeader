@class NSString, NSDictionary, NSArray;
@protocol ACCPublishRepository;

@interface AWERepoCameraModeCustomModel : NSObject <ACCRepositoryRequestParamsDeprecated, ACCRepositoryTrackContextDeprecated, NSCopying, ACCRepositoryContextDeprecated>

@property (nonatomic) BOOL supportModeCustom;
@property (copy, nonatomic) NSString *currentMode;
@property (copy, nonatomic) NSDictionary *modeName;
@property (copy, nonatomic) NSArray *allowMode;
@property (copy, nonatomic) NSArray *blockMode;
@property (nonatomic) BOOL subModeUiHide;
@property (copy, nonatomic) NSDictionary *subModeIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

- (id)acc_publishRequestParams:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
