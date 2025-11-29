@class NSString, AWETaskModel;

@interface AWECommerceOpenShareManager : NSObject <AWECommerceOpenShareProtocol, NSCoding>

@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSString *nationalUID;
@property (retain, nonatomic) AWETaskModel *taskModel;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNationalUID:(id)a0 requestMissionStatus:(unsigned long long)a1 openShareLandedPageType:(unsigned long long)a2 taskModel:(id)a3;
- (void)showInconsistentUIDTipsWithContainerView:(id)a0;
- (BOOL)isEnterOpenSharePublish;
- (unsigned long long)getOpenShareRequestMissionStatus;
- (id)getOpenShareTaskModel;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
