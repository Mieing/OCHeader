@class NSString, NSObject;
@protocol IESIMGroupAvatarPreviewService;

@interface IESIMGroupAvatarPreviewServiceWrapper : NSProxy <IESIMGroupAvatarPreviewService>

@property (retain, nonatomic) NSObject<IESIMGroupAvatarPreviewService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
