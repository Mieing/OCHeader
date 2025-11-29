@class NSDictionary, NSString;

@interface AWEMRInputDotUnreadDotModel : NSObject <AWEMRInputDotUnreadDotModelProtocol>

@property (copy, nonatomic) NSDictionary *unreadMap;
@property (copy, nonatomic) NSDictionary *bizTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
