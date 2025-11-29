@class NSString, NSObject;
@protocol IESIMGroupInfoUtil;

@interface IESIMGroupInfoUtilWrapper : NSProxy <IESIMGroupInfoUtil>

@property (retain, nonatomic) NSObject<IESIMGroupInfoUtil> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
