@class NSString, NSObject;
@protocol IESIMGroupBatchGroupMemberVisitService;

@interface IESIMGroupBatchGroupMemberVisitServiceWrapper : NSProxy <IESIMGroupBatchGroupMemberVisitService>

@property (retain, nonatomic) NSObject<IESIMGroupBatchGroupMemberVisitService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
