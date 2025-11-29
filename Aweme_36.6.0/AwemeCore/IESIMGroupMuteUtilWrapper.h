@class NSString, NSObject;
@protocol IESIMGroupMuteUtil;

@interface IESIMGroupMuteUtilWrapper : NSProxy <IESIMGroupMuteUtil>

@property (retain, nonatomic) NSObject<IESIMGroupMuteUtil> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
