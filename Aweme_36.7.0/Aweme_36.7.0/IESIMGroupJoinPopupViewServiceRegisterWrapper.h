@class NSString, NSObject;
@protocol IESIMGroupJoinPopupViewService;

@interface IESIMGroupJoinPopupViewServiceRegisterWrapper : NSProxy <IESIMGroupJoinPopupViewService>

@property (retain, nonatomic) NSObject<IESIMGroupJoinPopupViewService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
