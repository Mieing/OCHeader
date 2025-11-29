@class NSString;

@interface AWEFeedChannelLeaveModel : AWEFeedChannelTrackBaseModel <NSCopying>

@property (copy, nonatomic) NSString *nextTabID;
@property (nonatomic) long long leaveType;
@property (copy, nonatomic) NSString *leaveMethod;
@property (copy, nonatomic) NSString *leaveTo;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
