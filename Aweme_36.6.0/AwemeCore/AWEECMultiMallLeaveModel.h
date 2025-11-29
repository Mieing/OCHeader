@class NSString;

@interface AWEECMultiMallLeaveModel : NSObject <AWEECMultiMallLeaveModelProtocol>

@property (nonatomic) long long leaveType;
@property (nonatomic) long long nextIndex;
@property (copy, nonatomic) NSString *nextTabID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)leaveTypeDef;
- (id)visibleSource;
- (void).cxx_destruct;

@end
