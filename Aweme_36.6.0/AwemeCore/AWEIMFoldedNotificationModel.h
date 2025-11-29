@class NSArray, NSString;

@interface AWEIMFoldedNotificationModel : NSObject <AWEIMNotificationModelProtocol>

@property (copy, nonatomic) NSArray *containModels;
@property (nonatomic) long long headIndex;
@property (nonatomic) long long foldCount;
@property (nonatomic) BOOL isUnfolding;
@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) long long cellModelType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showingModel;
- (void).cxx_destruct;

@end
