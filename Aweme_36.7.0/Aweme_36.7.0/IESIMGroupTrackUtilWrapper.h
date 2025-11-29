@class NSString, NSObject;
@protocol IESIMGroupTrackUtil;

@interface IESIMGroupTrackUtilWrapper : NSProxy <IESIMGroupTrackUtil>

@property (retain, nonatomic) NSObject<IESIMGroupTrackUtil> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
