@class NSString, AWERecordCloseViewHolder;

@interface AWERecordCloseLayoutAction : NSObject <FPLayoutAction>

@property (readonly, nonatomic) AWERecordCloseViewHolder *closeViewHolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layout;

@end
